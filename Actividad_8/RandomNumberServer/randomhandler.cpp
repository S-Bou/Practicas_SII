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
        QString saludo = "RandomServer/1.0\r\n";
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
