#include "ccuadrado.h"

CCuadrado::CCuadrado() : CPoligono(1)
{

}

CCuadrado::CCuadrado(int lado) : CPoligono(1)
{
    EstablecerLongitud(1, lado);
}
