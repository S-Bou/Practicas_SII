#include "cpoligono.h"

/***************************************************************************************************************/
CPoligono::CPoligono(int numeroLados)
{
    numLados = numeroLados;
    lados = new int[numeroLados];

    for(int i=0; i<numeroLados; i++)
    {
        lados[i] = 0;
    }
}
/***************************************************************************************************************/
CPoligono::~CPoligono()
{
    delete[] lados;
}
/***************************************************************************************************************/
int CPoligono::NumeroLados()
{
    return numLados;
}
/***************************************************************************************************************/
void CPoligono::EstablecerLongitud(int lado, int longitud)
{
    //Limita la introducción de lados inexistentes
    if(lado < 0 || lado > NumeroLados()){return;}

    lados[lado-1] = longitud;
}
/***************************************************************************************************************/
bool CPoligono::BienDefinido()
{
    for(int i=0; i<NumeroLados(); i++)
    {
        if (lados[i] <= 0){return false;}
    }
    return true;
}
/***************************************************************************************************************/
int CPoligono::Perimetro()
{
    int perimetro = 0;
    for(int i = 0; i<NumeroLados(); i++)
    {
        perimetro += lados[i];
    }
    return perimetro;
}
/***************************************************************************************************************/
int CPoligono::SetterLado(int lado)
{
    return lados[lado];
}

