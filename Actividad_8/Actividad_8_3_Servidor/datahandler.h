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
    explicit DataHandler(QTcpSocket *socket, QObject *parent = nullptr);
    ~DataHandler();

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

private slots:
    void comprobarHora(void);

private:
    QDateTime dateNow;
    QTcpSocket *_socket;
    QTimer *timer;

    int horas;
    int minutos;
    QString reply;
    QString horaAlarma;
    QString horaActual;

};

#endif // DATAHANDLER_H
