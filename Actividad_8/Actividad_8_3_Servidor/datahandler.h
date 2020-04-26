#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include <QObject>
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

signals:
    void desconectado();

protected slots:
    void datosDisponibles();

private:
    QTcpSocket *_socket;

};

#endif // DATAHANDLER_H
