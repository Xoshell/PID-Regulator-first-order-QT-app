#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "qcustomplot.h"

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
    void onBtnStartClicked();
    void onBtnResetClicked();
    void updateSimulation();

private:
    double t;
    bool running;
    Ui::MainWindow *ui;
    QTimer timer;
    double y;             // system output
    double prevError;
    double integral;
    double dt;
    double tau, K;
};

#endif // MAINWINDOW_H
