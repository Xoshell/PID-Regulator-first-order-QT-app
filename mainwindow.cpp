#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), y(0), prevError(0), integral(0), dt(0.01), tau(1.0), K(1.0)
{
    ui->setupUi(this);
    // time step
    dt = 0.01;

    // initial state
    t = 0.0;
    y = 0.0;
    integral = 0.0;
    prevError = 0.0;

    running = false;

    // Setup QCustomPlot
    ui->customPlot->addGraph();
    ui->customPlot->xAxis->setLabel("Time [s]");
    ui->customPlot->yAxis->setLabel("Output");

    ui->customPlot->addGraph(); // graph 1 = setpoint
    ui->customPlot->graph(1)->setPen(QPen(Qt::DashLine));

    // initial colors
    ui->btnStart->setStyleSheet("background-color: green");
    ui->btnReset->setStyleSheet("background-color: red");
    ui->lblError->setStyleSheet("color: red;");

    //load image
    ui->lblEquation->setPixmap(QPixmap("C:/Users/lukas/Documents/pid/equationLATEX/equation.png")); // if using resources
    ui->lblEquation->setScaledContents(true); // scales nicely


    connect(&timer, &QTimer::timeout, this, &MainWindow::updateSimulation);
    connect(ui->btnStart, &QPushButton::clicked, this, &MainWindow::onBtnStartClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::onBtnResetClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onBtnStartClicked()
{
    if (!running) {
        timer.start(int(dt * 1000));
        running = true;
        ui->btnStart->setText("Pause");
        ui->btnStart->setStyleSheet("background-color: orange"); // running
    } else {
        timer.stop();
        running = false;
        ui->btnStart->setText("Start");
        ui->btnStart->setStyleSheet("background-color: green"); // stopped/ready
    }

    ui->customPlot->xAxis->setRange(0, ui->spinMaxTime->value());  //set x limit to max_time set
    double setpoint = ui->spinSetpoint->value();
    ui->customPlot->yAxis->setRange(0, setpoint * 1.2); //set x limit to 120 % of setpoint

}

void MainWindow::onBtnResetClicked()
{
    timer.stop();
    running = false;

    t = 0.0;         // <-- reset simulation time
    y = 0.0;
    integral = 0.0;
    prevError = 0.0;

    ui->lblError->setText(QString::number(0, 'f', 2));  //reset error value

    ui->customPlot->graph(0)->data()->clear(); // clear output
    if (ui->customPlot->graphCount() > 1)
        ui->customPlot->graph(1)->data()->clear(); // clear setpoint

    ui->customPlot->replot();

    ui->btnStart->setText("Start");
    ui->btnStart->setStyleSheet("background-color: green"); // stopped/ready

    // Re-enable max time spin box so user can change it
    ui->spinMaxTime->setEnabled(true);
}



void MainWindow::updateSimulation()
{
    double setpoint = ui->spinSetpoint->value();

    double maxTime = ui->spinMaxTime->value();
    if (t >= maxTime) {
        timer.stop();
        running = false;
        ui->btnStart->setText("Start");
    }



    double error = setpoint - y;
    integral += error * dt;
    double derivative = (error - prevError) / dt;
    double u = ui->spinKp->value() * error
               + ui->spinKi->value() * integral
               + ui->spinKd->value() * derivative;
    prevError = error;

    ui->lblError->setText(QString::number(error, 'f', 2));

    double tau = ui->spinTau->value();
    double K   = ui->spinGain->value();
    y += dt * (-y + K * u) / tau;

    ui->spinMaxTime->setEnabled(!running); //prevent changing time while running

    // add points using the **current t**
    ui->customPlot->graph(0)->addData(t, y);
    if (ui->customPlot->graphCount() > 1)
        ui->customPlot->graph(1)->addData(t, setpoint);


    t += dt;                     // <-- advance time

    ui->customPlot->replot();
}

