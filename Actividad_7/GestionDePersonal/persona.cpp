#include "persona.h"

QString Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const QString &value)
{
    apellidos = value;
}

Persona::Persona()
{
    setNombre("");
    setApellidos("");
    setNumeroDeIdentificacion("");
}

QString Persona::getNombre()
{
    return nombre;
}

void Persona::setNombre(QString s)
{
    nombre = s;
}

QString Persona::getNumeroDeIdentificacion()
{
    return numID;
}
void Persona::setNumeroDeIdentificacion(QString s)
{
    numID = s;
}

QString Persona::Resumen()
{
    QString res = getApellidos() + ", " + getNombre() + " (" + getNumeroDeIdentificacion() + ")";

    return res;
}

QString Persona::Descripcion()
{
    QString res;

    res = getNumeroDeIdentificacion() + "\n";
    res = getApellidos() + ", " + getNombre() + "\n";
    return res;
}
