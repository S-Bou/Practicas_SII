#ifndef DNI_H
#define DNI_H

#include "documento.h"

class Dni : public Documento
{
private:
    QString nacionalidad;
    //QString numDNI;

public:
    Dni();
    QString getNacionalidad() const;
    void setNacionalidad(const QString &value);
    QString getNumDNI() const;
    void setNumDNI(const QString &value);

    VALIDO ValidarDatos() override;
    QString Resumen() override;
    QString Descripcion() override;
};

#endif // DNI_H
