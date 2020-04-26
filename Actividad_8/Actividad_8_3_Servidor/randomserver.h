#ifndef RANDOMSERVER_H
#define RANDOMSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QHostAddress>
#include "datahandler.h"

class RandomServer : public QObject
{
    Q_OBJECT
public:
    explicit RandomServer(quint16 p = 33333, QObject *parent = nullptr);

    quint16 puerto();

    bool estaEscuchando();
    bool cerrar();

signals:

public slots:
    void conexionNueva();
    void clienteDesconectado();

protected:
    bool setPuerto(quint16 p);

private:
    quint16 _puerto;
    QTcpServer *_servidor;

};

#endif // RANDOMSERVER_H
