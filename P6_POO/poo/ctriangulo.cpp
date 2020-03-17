#include "ctriangulo.h"

CTriangulo::CTriangulo() : CPoligono(3) //Añadimos al constructor -> : CPoligono(3)
{

}
CTriangulo::CTriangulo(int l0, int l1, int l2) : CPoligono(3) //Necesitamos incluir el constructor -> : CPoligono(3)
{
    //Si la suma de los catetos es inferior o igual a la hipotenusa -> return
    if(l0 + l1 <= l2){return;}

    EstablecerLongitud(1, l0);
    EstablecerLongitud(2, l1);
    EstablecerLongitud(3, l2);
}
