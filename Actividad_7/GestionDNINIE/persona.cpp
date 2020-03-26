#include "persona.h"

QString Persona::getNombe() const
{
    return nombe;
}

void Persona::setNombe(const QString &value)
{
    nombe = value;
}

QString Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const QString &value)
{
    apellidos = value;
}

QString Persona::getNumID() const
{
    return numID;
}

void Persona::setNumID(const QString &value)
{
    numID = value;
}

Persona::Persona()
{

}
