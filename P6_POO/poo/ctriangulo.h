#ifndef CTRIANGULO_H
#define CTRIANGULO_H

#include "cpoligono.h"              //Incluir la librería

class CTriangulo : public CPoligono //Añadir la clase padre -> : public CPoligono
{
public:
    CTriangulo();
    CTriangulo(int l0, int l1, int l2); //Crea constructor con los lados del triangulo
};

#endif // CTRIANGULO_H
