#ifndef RANDOMHANDLER_H
#define RANDOMHANDLER_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>

class RandomHandler : public QObject
{
    Q_OBJECT
public:
    explicit RandomHandler(QTcpSocket * socket, QObject *parent = nullptr);

    //Métodos del socket TCP
    QHostAddress direccionIpLocal();
    QHostAddress direccionIpRemota();
    quint16 puertoLocal();
    quint16 puertoRemoto();
    bool estaAbierto();
    bool cerrar();

    //Métodos del campo _max
    int max();
    bool setMax(int m);

    //Métodos del campo _min
    int min();
    bool setMin(int m);

signals:
    void desconectado();

protected slots:
    void datosDisponibles();

private:
    QTcpSocket *_socket;
    int _max = RAND_MAX;
    int _min = 0;

    void inicializa_qrand();
    int rand();
};

#endif // RANDOMHANDLER_H
