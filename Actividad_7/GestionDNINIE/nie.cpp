#include "nie.h"

QString Nie::getNacionalidad() const
{
    return nacionalidad;
}

void Nie::setNacionalidad(const QString &value)
{
    nacionalidad = value;
}

VALIDO Nie::ValidarDatos()
{
    VALIDO datosDoc = Documento::ValidarDatos();
    if(datosDoc)
    {
    QString primerDigito = getNumID().data()[0];

        if(   primerDigito == QString("X") || primerDigito == QString("x")
           || primerDigito == QString("Y") || primerDigito == QString("y")
           || primerDigito == QString("Z") || primerDigito == QString("z"))
        {return correcto;}
    }
    return incorrecto;
}

QString Nie::Resumen()
{
    QString resumenDocu = Documento::Resumen();

    return resumenDocu + ", NIE: " + getNumID();
}

QString Nie::Descripcion()
{
    QString str = Documento::Descripcion();

    return str + "Nacionalidad: " + getNacionalidad();
}

Nie::Nie()
{

}

