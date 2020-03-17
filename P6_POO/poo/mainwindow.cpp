#include "mainwindow.h"
#include "ui_mainwindow.h"

//###############################################################################################################/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) //Esta linea equivale a -> ui = new Ui::MainWindow;
{
    ui->setupUi(this);

    connect(ui->pushButton_CrearPoligono, SIGNAL(pressed()), this, SLOT(crearPoligono()));
    connect(ui->pushButton_DefinirLado,   SIGNAL(pressed()), this, SLOT(introducirLado()));
    connect(ui->pushButton_Propiedades,   SIGNAL(pressed()), this, SLOT(mostrarPropiedades()));
    connect(ui->pushButton_CrearTriangulo,SIGNAL(pressed()), this, SLOT(CrearTriangulo()));
    connect(ui->pushButton_CrearCuadrado, SIGNAL(pressed()), this, SLOT(CrearCuadrado()));
}
//###############################################################################################################/
MainWindow::~MainWindow()
{
    delete ui;
    delete poligono;
}
//###############################################################################################################/
void MainWindow::crearPoligono()
{
    int nLados = ui->spinBox_NumeroLados->text().toInt();
    if(nLados < 3){return;}

   // if(poligono != nullptr){delete poligono;} //Si se han creado multiples objetos los elimina para que solo halla uno
                                              //Esto hace lo mismo -> if(poligono){delete poligono;}
    poligono = new CPoligono(nLados);         //Aqui se crea el objeto CPoligono
}
//###############################################################################################################/
void MainWindow::introducirLado()
{
    int lado = ui->spinBox_NumeroLado->text().toInt();
    int longitud = ui->spinBox_LongitudLado->text().toInt();
    poligono->EstablecerLongitud(lado, longitud);
}
//###############################################################################################################/
void MainWindow::mostrarPropiedades()
{
    QString str = "Número de lados del polígono: ";
    str.append(QString::number(poligono->NumeroLados()));
    str.append("\nLista de las longitudes de cada lado:");
    for(int i=0; i<poligono->NumeroLados(); i++)
    {
        str.append("\nLado ");
        str.append(QString::number(i+1));
        str.append(": ");
        str.append(QString::number(poligono->SetterLado(i)));
    }
    str.append("\nPerímetro del polígono: ");
    int beta = poligono->Perimetro();
    str.append(QString::number(beta));
    ui->plainTextEdit_Propiedades->setPlainText(str);
}
//###############################################################################################################/
void MainWindow::CrearTriangulo()
{
    int catetoUno = ui->spinBox_CatetoUno->text().toInt();
    int catetoDos = ui->spinBox_CatetoDos->text().toInt();
    int hipotenusa = ui->spinBox_Hipotenusa->text().toInt();

    triangulo = new CTriangulo(catetoUno, catetoDos, hipotenusa);

    QString str = "Número de lados del triangulo: ";
    str.append(QString::number(triangulo->NumeroLados()));
    str.append("\nLista de las longitudes de cada lado: ");

    str.append("\nCateto 1: ");
    str.append(QString::number(triangulo->SetterLado(0)));
    str.append("\nCateto 2: ");
    str.append(QString::number(triangulo->SetterLado(1)));
    str.append("\nHipotenusa: ");
    str.append(QString::number(triangulo->SetterLado(2)));

    str.append("\nPerímetro del triángulo: ");
    int perimetro = triangulo->Perimetro();
    str.append(QString::number(perimetro));
    ui->plainTextEdit_Triangulo->setPlainText(str);
}
//###############################################################################################################/
void MainWindow::CrearCuadrado()
{
    int longLado = ui->spinBox_LadoCuadrado->text().toInt();

    cuadrado = new CCuadrado(longLado);

    QString str = "Número de lados del cuadrado: ";
    str.append(QString::number(cuadrado->NumeroLados()*4));
    str.append("\nLista de las longitudes de cada lado: ");

    for(int i=0; i<4; i++)
    {
        str.append("\nLado ");
        str.append(QString::number(i+1));
        str.append(": ");
        str.append(QString::number(cuadrado->SetterLado(0)));
    }

    str.append("\nPerímetro del cuadrado: ");
    int perimetro = cuadrado->Perimetro()*4;
    str.append(QString::number(perimetro));
    ui->plainTextEdit_Cuadrado->setPlainText(str);
}
//###############################################################################################################/







