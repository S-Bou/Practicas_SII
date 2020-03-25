#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include <QString>
#include <QList>

class Profesor : public Persona
{
private:
    QString departamento;
    QString despacho;
    QList<QString> listaTutorias;

public:
    Profesor();

    QString getDepartamento() const;
    void setDepartamento(const QString &value);

    QString getDespacho() const;
    void setDespacho(const QString &value);

    void appendTutoria(QString asig);
    QString getTutoria(int i);
    void deleteTutoria(int i);
    int countTutorias();

    QString Resumen() override;
    QString Descripcion() override;

};

#endif // PROFESOR_H
