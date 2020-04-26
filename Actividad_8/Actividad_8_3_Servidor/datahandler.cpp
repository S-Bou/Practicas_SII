#include "datahandler.h"
#include <QDateTime>
DataHandler::DataHandler(QTcpSocket *socket, QObject *parent) : QObject(parent)
{
    _socket = socket;

    if(estaAbierto())
    {
        //Conectamos la señal al slot para leer datos cuando lleguen al socket.
        connect(socket, SIGNAL(readyRead()), this, SLOT(datosDisponibles()));

        //Conectamos las señales para emitir la señal "desconectado()" cuando se cierre el socket.
        connect(socket, SIGNAL(disconected()), this, SIGNAL(desconectado()));

        //Enviamos el primer mensaje del protocolo
        QString saludo = "RandomServer/1.0\r\n";
        _socket->write(saludo.toUtf8());
        _socket->flush();

        //Escribimos un mensaje de depuración en la salida estándar.
        qDebug().noquote() << "Enviado el cliente: " << saludo.trimmed();
    }
}

void DataHandler::datosDisponibles()
{
    while(_socket->canReadLine())
    {
        //Leemos una línea del socket y eliminamos los espaciosen blanco al principio y al final de la línea (trimmed())
        QByteArray buffer = _socket->readLine().trimmed();
        QString linea = QString::fromUtf8(buffer);

        //Mensaje de traza
        qDebug().noquote().nospace() << "Petición de " << direccionIpRemota().toString() << ":" << puertoRemoto() << " # " << linea;

        QString reply;

        if(linea == "FechaYHora")
        {
            //Si la petición es correcta la respuesta será un número aleatorio (con salto de línea al final)
            QDateTime dateNow = QDateTime::currentDateTime();
            reply = dateNow.toString() + "\r\n";
        }
        else if(linea == "hora")
        {
            QDateTime dateNow = QDateTime::currentDateTime();
            QStringList dateList = dateNow.toString().simplified().split(QRegExp("\\s+"));
            reply = dateList[3] + "\r\n";
        }
        else if(linea == "fecha")
        {
            QDateTime dateNow = QDateTime::currentDateTime();
            QStringList dateList = dateNow.toString().simplified().split(QRegExp("\\s+"));
            reply = dateList[0] + " " + dateList[2] + " " + dateList[1] + " " + dateList[4] + "\r\n";
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

QHostAddress DataHandler::direccionIpLocal()
{
    return _socket->localAddress();
}

QHostAddress DataHandler::direccionIpRemota()
{
    return _socket->peerAddress();
}

quint16 DataHandler::puertoLocal()
{
    return _socket->localPort();
}

quint16 DataHandler::puertoRemoto()
{
    return _socket->peerPort();
}

bool DataHandler::estaAbierto()
{
    return _socket && _socket->isOpen();
}

bool DataHandler::cerrar()
{
    if(!_socket){return false;}
    _socket->close();
    return true;
}
