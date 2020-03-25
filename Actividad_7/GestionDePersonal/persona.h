#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona
{
private:
    QString nombre;
    QString apellidos;
    QString numID;

public:
    Persona();

    QString getNombre();
    void setNombre(QString s);

    QString getApellidos() const;
    void setApellidos(const QString &value);

    QString getNumeroDeIdentificacion();
    void setNumeroDeIdentificacion(QString s);

    virtual QString Resumen();
    virtual QString Descripcion();
};

#endif // PERSONA_H
