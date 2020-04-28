#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void datosDisponibles();

    void on_pushButton_Hora_Fecha_clicked();

    void on_pushButton_Hora_clicked();

    void on_pushButton_Fecha_clicked();

    void on_pushButton_Dia_clicked();

    void on_pushButton_Alarma_clicked();

    void on_pushButton_EstablecerAlarma_clicked();

    void on_pushButton_DesdactivarAlarma_clicked();

private:
    Ui::MainWindow *ui;

    QTcpSocket *socket;
};
#endif // MAINWINDOW_H
