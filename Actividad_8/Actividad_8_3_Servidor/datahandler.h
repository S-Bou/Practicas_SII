#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include <QTimer>
#include <QObject>
#include <QDateTime>
#include <QTcpSocket>
#include <QHostAddress>

class DataHandler : public QObject
{
    Q_OBJECT
public:
    explicit DataHandler(QTcpSocket * socket, QObject *parent = nullptr);

    //Métodos del socket TCP
    QHostAddress direccionIpLocal();
    QHostAddress direccionIpRemota();
    quint16 puertoLocal();
    quint16 puertoRemoto();
    bool estaAbierto();
    bool cerrar();
    void comprobarHora(QString, QStringList);
signals:
    void desconectado();

protected slots:
    void datosDisponibles();

private:
    QTcpSocket *_socket;
    QTimer *timer;

};

#endif // DATAHANDLER_H
