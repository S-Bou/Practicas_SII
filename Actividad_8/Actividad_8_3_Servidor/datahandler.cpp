#include "datahandler.h"

DataHandler::DataHandler(QTcpSocket *socket, QObject *parent) : QObject(parent)
{
    _socket = socket;

    timer = new QTimer();

    if(estaAbierto())
    {
        //Conectamos la señal al slot para leer datos cuando lleguen al socket.
        connect(socket, SIGNAL(readyRead()), this, SLOT(datosDisponibles()));

        //Conectamos las señales para emitir la señal "desconectado()" cuando se cierre el socket.
        connect(socket, SIGNAL(disconected()), this, SIGNAL(desconectado()));

        //Enviamos el primer mensaje del protocolo
        QString saludo = "RandomServer/3.0\r\n";
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

        dateNow = QDateTime::currentDateTime();
        QStringList dateList = dateNow.toString().simplified().split(QRegExp("\\s+"));
        QStringList alarmaList = linea.simplified().split(QRegExp("\\s+"));

        //QString reply;

        if(linea == "FechaYHora")
        {
            //La respuesta será la fecha y la hora con este formato: dd, d MMMM yy hh:mm:ss
            reply = dateNow.toString() + "\r\n";
        }
        else if(linea == "hora")
        {
            //La respuesta será la hora: hh:mm:ss
            reply = dateNow.time().toString() + "\r\n";
        }
        else if(linea == "fecha")
        {
            //La salida será solo la fecha con este formato: dd, d MMMM yy
            reply = dateNow.date().toString() + "\r\n";
            //Otra opción:
            //reply = dateList[0] + " " + dateList[2] + " " + dateList[1] + " " + dateList[4] + "\r\n";
        }
        else if(linea == "diaSemana")
        {
            //La salida será solo el día
            reply = dateList[0] + "\r\n";
        }
        else if(alarmaList[0] == "alarma")
        {
            horaAlarma = alarmaList[1] + ":00";
            horaActual = dateNow.time().toString();

            reply = "Alarma establecida a las: " + horaAlarma + ", son las: " + horaActual + "\r\n";

            connect(timer, SIGNAL(timeout()), this, SLOT(comprobarHora()));
            timer->start(1000);
            qDebug() << "Entra en alarma válida";

        }
        else if(linea == "erroralarma")
        {
            //Se ha introducido una hora incorrecta
            reply = "Hora introducida no válida.\r\n";
        }
        else if(linea == "desactivarAlarma")
        {
            reply = "Alarma desactivada.\r\n";
            timer->stop();
            delete timer;
            //timer = NULL;
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

void DataHandler::comprobarHora(void)
{
    dateNow = QDateTime::currentDateTime();

    qDebug() << "Comprueba alarma" << dateNow.time().toString();

    if(horaAlarma == dateNow.time().toString())
    {
        dateNow = QDateTime::currentDateTime();

         reply = "La alarma se ha activado a las: " + dateNow.time().toString() + "\r\n";

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
DataHandler::~DataHandler()
{
    delete timer;
}
