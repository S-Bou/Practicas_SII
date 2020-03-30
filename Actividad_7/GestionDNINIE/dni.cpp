#include "dni.h"

QString Dni::getNacionalidad() const
{
    return nacionalidad;
}

void Dni::setNacionalidad(const QString &value)
{
    nacionalidad = value;
}

Dni::Dni()
{

}

VALIDO Dni::ValidarDatos()
{
    VALIDO datosDoc = Documento::ValidarDatos();

    if(datosDoc == correcto)
    {
        if(nacionalidad == QString("Española"))
        {
            QString primerDigito = getNumID().data()[0];

            if(primerDigito == QString("0")
            || primerDigito == QString("1")
            || primerDigito == QString("2")
            || primerDigito == QString("3")
            || primerDigito == QString("4")
            || primerDigito == QString("5")
            || primerDigito == QString("6")
            || primerDigito == QString("7")
            || primerDigito == QString("8")
            || primerDigito == QString("9"))
            {return correcto;}
        }
    }
    return incorrecto;
}

QString Dni::Resumen()
{
    QString resumenDocu = Documento::Resumen();

    return resumenDocu + ", DNI: " + getNumID();
}

QString Dni::Descripcion()
{
    QString str = Documento::Descripcion();

    return str + "Nacionalidad: " + getNacionalidad();
}


