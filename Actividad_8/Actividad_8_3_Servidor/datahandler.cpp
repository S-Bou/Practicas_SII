#include "datahandler.h"

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

        QDateTime dateNow = QDateTime::currentDateTime();
        QStringList dateList = dateNow.toString().simplified().split(QRegExp("\\s+"));
        QStringList alarmaList = linea.simplified().split(QRegExp("\\s+"));
        QTime hora = QTime::currentTime();

        QString reply;

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
            horas   = alarmaList[1].toInt();
            minutos = alarmaList[2].toInt();

            //No hace falta porque los spinBox no dejan poner una hora inválida, pero aqui se comprueba que es válida enviando (hh, mm, ss).
            if(QTime::isValid(horas, minutos, 00))
            {
                reply = "Alarma establecida a las: " + alarmaList[1] + ":" + alarmaList[2] + ", son las: " + hora.toString() + "\r\n";

                horaactual = dateNow.time().toString();
                horaalarma = alarmaList[1] + ":" + alarmaList[2] + ":00";

                timer = new QTimer();
                connect(timer, SIGNAL(timeout()), this, SLOT(comprobarHora()));
                timer->start(1000);
                qDebug() << "Entra en alarma válida";
            }
        }
        else if(linea == "erroralarma")
        {
            //La salida será solo el día
            reply = "Hora introducida no válida.\r\n";
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
    qDebug() << "Comprueba alarma" << horaactual << " " << horaalarma;

    if(true)
    {
        qDebug() << "ALARMA";
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
