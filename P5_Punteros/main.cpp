#include <QCoreApplication>

void intercambiar_double(double*, double*);
double suma_double(double v0, double v1);
double resta_double(double v0, double v1);
double multiplicacion_double(double v0, double v1);
double division_double(double v0, double v1);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*###################################### ACTIVIDAD 1 #####################################################################*/
    int i=10;
    int *pi;
    printf("Actividad: 1\n\n");
    printf("Primer valor de la variable (i): %d\n", i);
    pi = &i;
    *pi = (*pi) * 2;
    printf("Segundo valor de la varible (i): %d", i);
/*###################################### ACTIVIDAD 2  #####################################################################*/
    printf("\n\nActividad: 2\n\n");
    printf("Direccion de memoria de  'i': %p\n", &i);
    printf("Direccion de memoria de 'pi': %p\n", &pi);
    printf("Contenido de  'i' como puntero: %p\n", i);
    printf("Contenido de 'pi' como puntero: %p\n", pi);
    printf("Contenido de  'i' en hexadecimal: %x\n", i);
    printf("Contenido de 'pi' en hexadecimal: %x\n", pi);
    printf("Es el mismo valor.");
/*###################################### ACTIVIDAD 3  #####################################################################*/
    printf("\n\nActividad: 3\n\n");
    double d0=3.14159265359, d1=2.71828182846;
    printf("Tamanyo de pi en bytes: %d\n", sizeof(d0));
    printf("Tamanyo de  e en bytes: %d\n", sizeof(d1));
    printf("Ocupan el mismo espacio aunque son diferentes.");
/*###################################### ACTIVIDAD 4  #####################################################################*/
    printf("\n\nActividad: 4\n\n");
    double vd[5] = {0.0, 1.0, 2.0, 3.0, 4.0};
    for(int i=0; i<5; i++)
    {
        printf("Elemento %d = %.2f\n", i+1, vd[i]);
    }
    //---------------------------------------------------------------
    printf("\n");
    double *pd;
    pd = new double[5];
    pd = vd;
    for(int i=0; i<5; i++)
    {
        printf("Elemento %d = %.2f\n", i+1, (*pd+i)*2);
    }
    //---------------------------------------------------------------
    printf("\n");
    pd[2] = vd[2];
    pd[2] = 100.0;
    for(int i=0; i<5; i++)
    {
        printf("Elemento %d = %.2f\n", i+1, pd[i]);
    }
/*###################################### ACTIVIDAD 5  #####################################################################*/
    printf("\n\nActividad: 5\n\n");
    struct ts
    {
        int i;
        float f;
    };
    ts s;
    s.i=10;
    s.f=20.0;
    printf("Valores: i = %d, f = %.2f\n", s.i, s.f);
    ts *ps = new ts;
    *ps = s;
    ps->i *= 2;
    ps->f *= 2;
    printf("Valores: i = %d, f = %.2f\n", (*ps).i, (*ps).f);
    printf("Es mas comodo usar el operador '->' y punteros.");
/*###################################### ACTIVIDAD 6  #####################################################################*/
    printf("\n\nActividad: 6\n\n");
    void *pv = &s;
    printf("%.2f", ((ts*)pv)->f);
/*###################################### ACTIVIDAD 7  #####################################################################*/
    printf("\n\nActividad: 7\n\n");
    printf("pi = %.4f, e = %.4f\n", d0, d1);
    intercambiar_double(&d0, &d1);
    printf("pi = %.4f, e = %.4f\n", d0, d1);
/*###################################### ACTIVIDAD 8  #####################################################################*/
    printf("\n\nActividad: 8\n\n");
    printf("pi = %.4f, e = %.4f\n\n", d0, d1);
    printf("Elija operacion:\n\n  1.Suma\n  2.Resta\n  3.Multiplicacion\n  4.Division\n\n");
    int opcion;
    double resultado;
    printf("Opcion elegida: ");scanf("%d", &opcion);
    printf("\n");
    switch (opcion) {
    case 1:
        resultado = suma_double(d0, d1);
        break;
    case 2:
        resultado = resta_double(d0, d1);
        break;
    case 3:
        resultado = multiplicacion_double(d0, d1);
        break;
    case 4:
        resultado = division_double(d0, d1);
        break;
//    default:
//        printf("Error, opcion no valida.");
//        break;
    }
    printf("El resultado es: %.4f\n\n", resultado);
    double (*operaciones[4])(double d0, double d1);
    operaciones[0] = suma_double;
    operaciones[1] = resta_double;
    operaciones[2] = multiplicacion_double;
    operaciones[3] = division_double;
    switch (opcion) {
    case 1:
        resultado = operaciones[0](d0, d1);
        break;
    case 2:
        resultado = operaciones[1](d0, d1);
        break;
    case 3:
        resultado = operaciones[2](d0, d1);
        break;
    case 4:
        resultado = operaciones[3](d0, d1);
        break;
    }
    printf("El resultado con punteros es: %.4f\n", resultado);
/*###################################### ACTIVIDAD 9  #####################################################################*/
    printf("\n\nActividad: 9\n\n");
    //int *pi;
    pi = new int;
    *pi = 123;
    printf("Contenido de pi = %d\n", *pi);
    printf("Memoria apuntada por pi = %p\n", *pi);
    delete pi;
    printf("Despues del 'delete'...\n");
    printf("Contenido de pi = %d\n", *pi);
    printf("Memoria apuntada por pi = %p\n", *pi);

    pi = new int[5];
    delete[] pi;

    pi = (int *) malloc(5 * sizeof(int));
    free(pi);
/*###################################### ACTIVIDAD 10 #####################################################################*/
    printf("\n\nActividad: 10\n\n");
    char vc[20] = "Hello world!\n";
    printf("%s\n", vc);
    strcpy (vc,"Bye            \n");
    printf("%s\n", vc);

    char *vic;
    //vic = new char[20];
    vic = vc;
    for(i=0; i<20; i++)
    {
        printf("%c", *(vic+i));
    }
/*###################################### ACTIVIDAD 11 #####################################################################*/
    printf("\n\nActividad: 11\n\n");

    char vs[3][8] = {"Hola ", "como ", "estais\n"};
    for(i=0; i<3; i++)
    {
        printf("%s", vs[i]);
    }
/*#########################################################################################################################*/
    return a.exec();
}
/*###################################### DEFINICIÓN DE FUNCIONES ##########################################################*/
void intercambiar_double(double *pi_data, double *e_data)
{
    double aux;
    aux = *e_data;
    *e_data = *pi_data;
    *pi_data = aux;
}
/*#########################################################################################################################*/
double suma_double(double v0, double v1)
{
    double auxRes = v0 + v1;
    return auxRes;
}
double resta_double(double v0, double v1)
{
    double auxRes = v0 - v1;
    return auxRes;
}
double multiplicacion_double(double v0, double v1)
{
    double auxRes = v0 * v1;
    return auxRes;
}
double division_double(double v0, double v1)
{
    double auxRes = v0 / v1;
    return auxRes;
}
/*#########################################################################################################################*/

