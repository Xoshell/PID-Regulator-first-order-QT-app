/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *customPlot;
    QLabel *lblEquation;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QDoubleSpinBox *spinMaxTime;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QPushButton *btnReset;
    QLabel *label_6;
    QDoubleSpinBox *spinTau;
    QLabel *label_5;
    QDoubleSpinBox *spinGain;
    QLabel *label_4;
    QDoubleSpinBox *spinSetpoint;
    QFrame *frame_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *spinKd;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *spinKp;
    QDoubleSpinBox *spinKi;
    QLabel *label_9;
    QFrame *frame_3;
    QLabel *label_8;
    QLabel *lblError;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName("customPlot");
        customPlot->setGeometry(QRect(300, 10, 571, 321));
        lblEquation = new QLabel(centralwidget);
        lblEquation->setObjectName("lblEquation");
        lblEquation->setGeometry(QRect(220, 380, 391, 161));
        lblEquation->setMinimumSize(QSize(200, 80));
        lblEquation->setFrameShape(QFrame::Shape::Panel);
        lblEquation->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(790, 340, 81, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        spinMaxTime = new QDoubleSpinBox(verticalLayoutWidget_2);
        spinMaxTime->setObjectName("spinMaxTime");
        spinMaxTime->setDecimals(1);
        spinMaxTime->setMinimum(0.100000000000000);
        spinMaxTime->setValue(5.000000000000000);

        verticalLayout_2->addWidget(spinMaxTime);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 191, 241));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 171, 222));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setObjectName("layout");
        layout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnStart = new QPushButton(verticalLayoutWidget);
        btnStart->setObjectName("btnStart");

        horizontalLayout->addWidget(btnStart);

        btnReset = new QPushButton(verticalLayoutWidget);
        btnReset->setObjectName("btnReset");

        horizontalLayout->addWidget(btnReset);


        layout->addLayout(horizontalLayout);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setBold(false);
        label_6->setFont(font);

        layout->addWidget(label_6);

        spinTau = new QDoubleSpinBox(verticalLayoutWidget);
        spinTau->setObjectName("spinTau");
        spinTau->setSingleStep(0.100000000000000);
        spinTau->setValue(1.000000000000000);

        layout->addWidget(spinTau);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        layout->addWidget(label_5);

        spinGain = new QDoubleSpinBox(verticalLayoutWidget);
        spinGain->setObjectName("spinGain");
        spinGain->setSingleStep(0.100000000000000);
        spinGain->setValue(1.000000000000000);

        layout->addWidget(spinGain);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        layout->addWidget(label_4);

        spinSetpoint = new QDoubleSpinBox(verticalLayoutWidget);
        spinSetpoint->setObjectName("spinSetpoint");
        spinSetpoint->setSingleStep(0.100000000000000);
        spinSetpoint->setValue(1.000000000000000);

        layout->addWidget(spinSetpoint);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 260, 281, 101));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayoutWidget = new QWidget(frame_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 261, 85));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinKd = new QDoubleSpinBox(gridLayoutWidget);
        spinKd->setObjectName("spinKd");
        spinKd->setSingleStep(0.100000000000000);

        gridLayout->addWidget(spinKd, 2, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        spinKp = new QDoubleSpinBox(gridLayoutWidget);
        spinKp->setObjectName("spinKp");
        spinKp->setSingleStep(0.100000000000000);
        spinKp->setValue(1.000000000000000);

        gridLayout->addWidget(spinKp, 2, 0, 1, 1);

        spinKi = new QDoubleSpinBox(gridLayoutWidget);
        spinKi->setObjectName("spinKi");
        spinKi->setSingleStep(0.100000000000000);

        gridLayout->addWidget(spinKi, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(10, 370, 120, 80));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 158, 20));
        lblError = new QLabel(frame_3);
        lblError->setObjectName("lblError");
        lblError->setGeometry(QRect(10, 30, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Octicons Nerd Font")});
        font1.setPointSize(26);
        font1.setBold(false);
        lblError->setFont(font1);
        lblError->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PID Simulator", nullptr));
        lblEquation->setText(QCoreApplication::translate("MainWindow", "img", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "t_max", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\317\204", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Set Point", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kd", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ki", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "PID:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Error:", nullptr));
        lblError->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
