#ifndef CPOLIGONO_H
#define CPOLIGONO_H

class CPoligono
{
    int *lados = nullptr;  //El vector apunta a null antes de hacer cualquiercosa
    int numLados;

public:
    CPoligono(int numeroLados); //Constructor
    ~CPoligono(); //AL usar variables dinámicas necesitaremos este destructor

    int NumeroLados(void);
    void EstablecerLongitud(int lado, int longitud);
    bool BienDefinido(void);
    int Perimetro(void);
    int SetterLado(int lado);
};

#endif // CPOLIGONO_H
