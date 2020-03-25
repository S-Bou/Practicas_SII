#include "profesor.h"

QString Profesor::getDepartamento() const
{
    return departamento;
}

void Profesor::setDepartamento(const QString &value)
{
    departamento = value;
}

QString Profesor::getDespacho() const
{
    return despacho;
}

void Profesor::setDespacho(const QString &value)
{
    despacho = value;
}

void Profesor::appendTutoria(QString asig)
{
    listaTutorias.append(asig);
}

QString Profesor::getTutoria(int i)
{
    if(i >= 0 && i < countTutorias())
    {
        return listaTutorias[i];
    }
    else
    {
        return "";
    }
}

void Profesor::deleteTutoria(int i)
{
    if(i >= 0 && i < countTutorias())
    {
        listaTutorias.removeAt(i);
    }
}

int Profesor::countTutorias()
{
    return listaTutorias.count();
}

QString Profesor::Resumen()
{
    QString resumenPersona = Persona::Resumen();

    return "Profesor: " + resumenPersona;
}

QString Profesor::Descripcion()
{
    QString res;

    res  = "Profesor: \n";
    res += "DNI/NIER: " + getNumeroDeIdentificacion() + "\n";
    res += "Apellidos, Nombre: " + getApellidos() + ", " + getNombre() + "\n";
    res += "Departamento: " + getDepartamento() + "\n";
    res += "Despacho: " + getDespacho() + "\n";
    res += "Horario de tutorias: \n";

    for (int i = 0; i< countTutorias(); i++)
    {
        res += " -" + getTutoria(i) + "\n";
    }
    return res;
}

Profesor::Profesor()
{

}
