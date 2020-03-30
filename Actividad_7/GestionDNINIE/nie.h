#ifndef NIE_H
#define NIE_H

#include "documento.h"

class Nie : public Documento
{
private:
    QString nacionalidad;
    //QString numNIE;

public:
    Nie();
    QString getNacionalidad() const;
    void setNacionalidad(const QString &value);
    QString getNumNIE() const;
    void setNumNIE(const QString &value);

    VALIDO ValidarDatos() override;
    QString Resumen() override;
    QString Descripcion() override;
};

#endif // NIE_H
