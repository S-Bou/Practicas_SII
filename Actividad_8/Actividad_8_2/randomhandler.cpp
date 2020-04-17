#include "randomhandler.h"
#include <QDateTime>

RandomHandler::RandomHandler(QTcpSocket *socket, QObject *parent) : QObject(parent)
{
    _socket = socket;

    if(estaAbierto())
    {
        //Conectamos la señal al slot para leer datos cuando lleguen al socket.
        connect(socket, SIGNAL(readyRead()), this, SLOT(datosDisponibles()));

        //Conectamos las señales para emitir la señal "desconectado()" cuando se cierre el socket.
        connect(socket, SIGNAL(disconected()), this, SIGNAL(desconectado()));

        //Inicializamos el generador de números aleatorios.
        inicializa_qrand();

        //Enviamos el primer mensaje del protocolo
        QString saludo = "RandomServer/2.0\r\n";
        _socket->write(saludo.toUtf8());
        _socket->flush();

        //Escribimos un mensaje de depuración en la salida estándar.
        qDebug().noquote() << "Enviado el cliente: " << saludo.trimmed();
    }
}

QHostAddress RandomHandler::direccionIpLocal()
{
    return _socket->localAddress();
}

QHostAddress RandomHandler::direccionIpRemota()
{
    return _socket->peerAddress();
}

quint16 RandomHandler::puertoLocal()
{
    return _socket->localPort();
}

quint16 RandomHandler::puertoRemoto()
{
    return _socket->peerPort();
}

bool RandomHandler::estaAbierto()
{
    return _socket && _socket->isOpen();
}

bool RandomHandler::cerrar()
{
    if(!_socket){return false;}
    _socket->close();
    return true;
}

int RandomHandler::max()
{
    return _max;
}

bool RandomHandler::setMax(int m)
{
    if(m > min() && m <= RAND_MAX)
    {
        _max = m;
        return true;
    }
    return false;
}

int RandomHandler::min()
{
    return _min;
}

bool RandomHandler::setMin(int m)
{
    if(m < max() && m >= 0)
    {
        _min = m;
        return true;
    }
    return false;
}

void RandomHandler::datosDisponibles()
{
    while(_socket->canReadLine())
    {
        //Leemos una línea del socket y eliminamos los espaciosen blanco al principio y al final de la línea (trimmed())
        QByteArray buffer = _socket->readLine().trimmed();
        QString linea = QString::fromUtf8(buffer);

        //Mensaje de traza
        qDebug().noquote().nospace() << "Petición de " << direccionIpRemota().toString() << ":" << puertoRemoto() << " # " << linea;

        QString reply;

        if(linea == "RDN" || linea == "rdn")
        {
            //Si la petición es correcta la respuesta será un número aleatorio (con salto de línea al final)
            reply = QString().number(rand()) + "\r\n";
        }
        else if(linea == "MIN" || linea == "min")
        {
            //Si la petición es correcta la respuesta será el valor mínimo del rango de los números aleatorios
            reply = QString().number(min()) + "\r\n";
        }
        else if(linea == "MAX" || linea == "max")
        {
            //Si la petición es correcta la respuesta será el valor máximo del rango de los números aleatorios
            reply = QString().number(max()) + "\r\n";
        }
        else if(linea == "SETMIN" || linea == "setmin")
        {

        }
        else if(linea == "SETMAX" || linea == "setmax")
        {

        }
        else
        {
            //Si la petición es incorrecta la respuesta será un mensaje de error.
            reply = "ERROR 500 Bad request\r\n";
        }

        //Enviamos la repuesta
        _socket->write(reply.toUtf8());
        _socket->flush();

        qDebug().noquote() << "Respondiendo: " << reply.trimmed();
    }
}

void RandomHandler::inicializa_qrand()
{
    uint aux = (int)QDateTime::currentDateTimeUtc().toMSecsSinceEpoch();
    qsrand(aux);
}

int RandomHandler::rand()
{
    return (qrand() % (_max - _min)) + _min;
}
