#ifndef GRAFICA_H
#define GRAFICA_H

#include <QWidget>

#include <QMainWindow>
#include <QTimer>
#include <QVector>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>

#include "chart.h"
#include "chartview.h"

namespace Ui {
class grafica;
}

class grafica : public QWidget
{
    Q_OBJECT

    QVector<QtCharts::QLineSeries*> Series;

    QTimer* timer;
    Chart* chart;
    ChartView* chartView;
    QtCharts::QValueAxis *axisX;
    QtCharts::QValueAxis *axisY;

public:
    explicit grafica(QWidget *parent = nullptr);
    ~grafica();

private:
    Ui::grafica *ui;

public slots:
    void NuevaSerie(void);
    void NuevaMuestra(void);



};

#endif // GRAFICA_H
