#include "alumno.h"

QString Alumno::getCurso() const
{
    return curso;
}

void Alumno::setCurso(const QString &value)
{
    curso = value;
}

void Alumno::appendAsignatura(QString asig)
{
    listaAsignaturas.append(asig);
}

QString Alumno::getAsignatura(int i)
{
    if(i >= 0 &&  i < countAsignatura())
    {
        return listaAsignaturas[i];
    }else
    {
        return "";
    }
}

void Alumno::deleteAsignatura(int i)
{
    if(i >= 0 && i < countAsignatura())
    {
        listaAsignaturas.removeAt(i);
    }
}

int Alumno::countAsignatura()
{
    return listaAsignaturas.count();
}

QString Alumno::Resumen()
{
    QString resumenPersona = Persona::Resumen();

    return "Alumno: " + resumenPersona;
}

QString Alumno::Descripcion()
{
    QString res;

    res  = "Alumno: \n";
    res += "DNI/NIE: " + getNumeroDeIdentificacion() + "\n";
    res += "Apellidos, nombre: " + getApellidos() + ", " + getNombre() + "\n";
    res += "Curso: " + getCurso() + "\n";
    res += "Asignaturas matriculadas: \n";

    for(int i = 0; i < countAsignatura(); i++)
    {
        res += " -" + getAsignatura(i) + "\n";
    }

    return res;
}

Alumno::Alumno()
{

}




