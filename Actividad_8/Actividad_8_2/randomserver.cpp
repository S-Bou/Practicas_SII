#include "randomserver.h"

RandomServer::RandomServer(quint16 p, QObject *parent) : QObject(parent)
{
    //Asignamos el puerto al campo privado.
    setPuerto(p);

    //Creamos un nuevo servidor
    _servidor = new QTcpServer();

    //Ponemos el servidor a escuchar a traves del puerto asignado. Usaremos únicamente IPv4
    if(_servidor->listen(QHostAddress::AnyIPv4, puerto()))
    {
        //Si el servidor ha podido abrir el puerto connectamos las señales con los slots
        connect(_servidor, SIGNAL(newConnection()), this, SLOT(conexionNueva()));
        connect(_servidor, SIGNAL(destroyed(QObject*)), this, SLOT(deleteLater()));
    }
    else
    {
        //Si el servidor no ha podido abrir el puerto lo destruimos
        //Esta situación suele darse cuando hay otro servidor usando el mismo número de puerto.
        delete _servidor;
    }
}

quint16 RandomServer::puerto()
{
    return _puerto;
}

bool RandomServer::setPuerto(quint16 p)
{
    _puerto = p;
    return true;
}

bool RandomServer::cerrar()
{
    if(!_servidor){return false;}
    _servidor->close();
    delete _servidor;
    return true;
}

bool RandomServer::estaEscuchando()
{
    return _servidor && _servidor->isListening();
}

void RandomServer::conexionNueva()
{
    //Mientras quedan conexiones pendientes las aceptamos y crearemos objetos de tipo RandomHandler (una por conexión)
    while(_servidor->hasPendingConnections())
    {
        //Obtenemos la siguiente conexión establecida con el primer cliente de la cola de conexiones pendientes.
        QTcpSocket *socket = _servidor->nextPendingConnection();

        //Creamos un objeto del tipo RandomHandler para atender a la nueva conexión.
        RandomHandler *conn = new RandomHandler(socket);

        //Mostramos un mensaje de traza.
        qDebug().noquote().nospace() << "Conexión nueva " << conn->direccionIpRemota().toString() << ":" << conn->puertoRemoto();

        //Conectamos la señal desconectado() del objeto RandomHandler, con el slot clienteDesconectado() del servidor,
        //Así detectaremos cuando se desconecta cada cliente.
        connect(conn, SIGNAL(desconectado()), this, SLOT(clienteDesconectado()));
    }
}

void RandomServer::clienteDesconectado()
{
    //Obtenemos el cliente que se ha desconectadollamando al método sender().
    RandomHandler *conn = (RandomHandler *)sender();

    //Mostramos un mensaje de traza.
    qDebug().noquote().nospace() << "cliente desconectado: " << conn->direccionIpRemota().toString() << ":" << conn->puertoRemoto();

    //Le decimos a Qt que borre el objeto cuanto antes.
    conn->deleteLater();
}
