#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include <QString>
#include <QDebug>
#include "errorwindow.h"

typedef enum{incorrecto,correcto}VALIDO;

class Documento
{
private:
    QString tipodoc;
    QString sexo;
    QString nombre;
    QString apellidos;
    QString numID;

public:
    Documento();

    void MostrarError(void);

    QString getTipodoc() const;
    void setTipodoc(const QString &value);

    QString getSexo() const;
    void setSexo(const QString &value);

    QString getNombre() const;
    void setNombre(const QString &value);

    QString getApellidos() const;
    void setApellidos(const QString &value);

    QString getNumID() const;
    void setNumID(const QString &value);

    //Comprueba que todos los campos esten correctos
    virtual VALIDO ValidarDatos(void);
    //Devuelve el nombre y apellidos
    virtual QString Resumen(void);
    //Devuelve el resto de datos
    virtual QString Descripcion(void);

};

#endif // DOCUMENTO_H
