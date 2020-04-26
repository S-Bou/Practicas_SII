#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <randomserver.h>

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
    void on_pushButton_start_clicked();

    void on_pushButton_stop_clicked();

private:
    Ui::MainWindow *ui;

    RandomServer *servidor;
};
#endif // MAINWINDOW_H
