#include "grafica.h"
#include "ui_grafica.h"



grafica::grafica(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::grafica)
{
    ui->setupUi(this);

    timer = new QTimer;
    timer->setInterval(100);
    timer->start();

    chart = new Chart();
    chart->setMinimumSize(640,480);
    chart->setTitle("Series Temporales");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    axisX = new QtCharts::QValueAxis;
    axisX->setMin(0);
    axisX->setMax(500);
    axisX->setTickCount(10);
    chart->addAxis(axisX, Qt::AlignBottom);
    axisY = new QtCharts::QValueAxis;
    axisY->setMin(0);
    axisY->setMax(50);
    axisY->setTickCount(5);
    chart->addAxis(axisY, Qt::AlignLeft);

    chartView = new ChartView(chart, this);
    chartView->setGeometry(QRect(50,50,640,480));
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setChart(chart);
    chartView->show();


   QtCharts::QLineSeries *newLineSeries = new QtCharts::QLineSeries;
   chart->addSeries(newLineSeries);
   newLineSeries->attachAxis(axisX);
   newLineSeries->attachAxis(axisY);
   Series.push_back(newLineSeries);

   QPen pen(newLineSeries->pen().color());
   pen.setWidth(1);
   newLineSeries->setPen(pen);

   connect(ui->pushButtonNuevaSerie,SIGNAL(clicked(bool)),this, SLOT(NuevaSerie()));
   connect(timer               ,SIGNAL(timeout())    ,this, SLOT(NuevaMuestra()));

}

grafica::~grafica()
{
    delete ui;
}

void grafica::NuevaSerie(void){
    QtCharts::QLineSeries *newLineSeries = new QtCharts::QLineSeries;
    chart->addSeries(newLineSeries);
    newLineSeries->attachAxis(axisX);
    newLineSeries->attachAxis(axisY);
    Series.push_back(newLineSeries);

    QPen pen(newLineSeries->pen().color());
    pen.setWidth(1);
    newLineSeries->setPen(pen);
}

int randInt(int low, int high);

void grafica::NuevaMuestra(void){
    static long muestra = 0;
    Series[0]->append(muestra, ui->verticalSlider->value());
    for(int serie = 1; serie < Series.size(); serie++){
        Series[serie]->append(muestra, randInt(0, 99));
    }
    muestra++;
}


