#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;

    public slots:
        void calculoArea(void);
        void closeWin(void);
        void sliderData(void);

//    protected:
//        void paintEvent(QPaintEvent *event);

private slots:
        void on_pushButton_pressed();
};
#endif // MAINWINDOW_H
