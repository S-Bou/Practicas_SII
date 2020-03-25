#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include <QString>
#include <QList>

class Alumno : public Persona
{
private:
    QString curso;
    QList<QString> listaAsignaturas;

public:
    Alumno();

    QString getCurso() const;
    void setCurso(const QString &value);

    void appendAsignatura(QString asig);
    QString getAsignatura(int i);
    void deleteAsignatura(int i);
    int countAsignatura();

    QString Resumen() override;
    QString Descripcion() override;
};

#endif // ALUMNO_H
