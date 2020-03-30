#include "documento.h"

Documento::Documento()
{

}

VALIDO Documento::ValidarDatos()
{//Comprueba que se ha elegido tipo de documento

    if(tipodoc == QString("DNI / NIE")
        ||sexo == QString("M / H")
        || nombre == QString("")
        || apellidos == QString("")
        || numID.size() < 9
        || numID.size() > 9)
    {
        return incorrecto;
    }

    QString ultimoDigito = getNumID().data()[8];

    if(ultimoDigito == QString("0")
    || ultimoDigito == QString("1")
    || ultimoDigito == QString("2")
    || ultimoDigito == QString("3")
    || ultimoDigito == QString("4")
    || ultimoDigito == QString("5")
    || ultimoDigito == QString("6")
    || ultimoDigito == QString("7")
    || ultimoDigito == QString("8")
    || ultimoDigito == QString("9"))
    {return incorrecto;}

    return correcto;
}

QString Documento::Resumen()
{//Unifica los datos
    QString res = getNombre() + " " + getApellidos();

    return res;
}

QString Documento::Descripcion()
{
    QString str;
    str = "Nombre: "+getNombre()+" "+getApellidos() + "\n";
    str += "Documento("+getTipodoc()+"): " +getNumID()+ "\n";
    str += "Sexo: " + getSexo() + "\n";

    return str;
}

void Documento::MostrarError()
{
    ErrorWindow *errorwindow = new ErrorWindow;
    errorwindow->setModal(true);
    errorwindow->show();
}

QString Documento::getNombre() const
{
    return nombre;
}

void Documento::setNombre(const QString &value)
{
    nombre = value;
}

QString Documento::getApellidos() const
{
    return apellidos;
}

void Documento::setApellidos(const QString &value)
{
    apellidos = value;
}

QString Documento::getNumID() const
{
    return numID;
}

void Documento::setNumID(const QString &value)
{
    numID = value;
}

QString Documento::getTipodoc() const
{
    return tipodoc;
}

void Documento::setTipodoc(const QString &value)
{
    tipodoc = value;
}

QString Documento::getSexo() const
{
    return sexo;
}

void Documento::setSexo(const QString &value)
{
    sexo = value;
}



