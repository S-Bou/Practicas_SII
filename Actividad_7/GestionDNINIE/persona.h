#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona
{
private:
    QString nombe;
    QString apellidos;
    QString sexo;
    QString nacionalidad;

    QString numID;

public:
    Persona();
    QString getNombe() const;
    void setNombe(const QString &value);

    QString getApellidos() const;
    void setApellidos(const QString &value);

    QString getNumID() const;
    void setNumID(const QString &value);
};

#endif // PERSONA_H
