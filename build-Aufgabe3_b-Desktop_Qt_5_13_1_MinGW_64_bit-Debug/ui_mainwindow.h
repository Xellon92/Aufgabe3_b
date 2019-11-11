/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonTimer;
    QSpinBox *spinBox;
    QGraphicsView *graphicsView;
    QLabel *FeldGr;
    QTimeEdit *timeEdit;
    QLabel *Zeitspanne;
    QPushButton *buttonImport;
    QPushButton *buttonExport;
    QPushButton *buttonStopp;
    QPushButton *buttonReset;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonTimer = new QPushButton(centralwidget);
        buttonTimer->setObjectName(QString::fromUtf8("buttonTimer"));
        buttonTimer->setGeometry(QRect(40, 100, 101, 31));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(210, 240, 42, 22));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(275, 161, 511, 391));
        FeldGr = new QLabel(centralwidget);
        FeldGr->setObjectName(QString::fromUtf8("FeldGr"));
        FeldGr->setGeometry(QRect(200, 210, 61, 21));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(150, 100, 118, 22));
        Zeitspanne = new QLabel(centralwidget);
        Zeitspanne->setObjectName(QString::fromUtf8("Zeitspanne"));
        Zeitspanne->setGeometry(QRect(170, 60, 61, 21));
        buttonImport = new QPushButton(centralwidget);
        buttonImport->setObjectName(QString::fromUtf8("buttonImport"));
        buttonImport->setGeometry(QRect(10, 460, 75, 23));
        buttonExport = new QPushButton(centralwidget);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));
        buttonExport->setGeometry(QRect(10, 500, 75, 23));
        buttonStopp = new QPushButton(centralwidget);
        buttonStopp->setObjectName(QString::fromUtf8("buttonStopp"));
        buttonStopp->setGeometry(QRect(280, 100, 81, 31));
        buttonReset = new QPushButton(centralwidget);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));
        buttonReset->setGeometry(QRect(510, 130, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonTimer->setText(QCoreApplication::translate("MainWindow", "Timer starten", nullptr));
#if QT_CONFIG(whatsthis)
        graphicsView->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        FeldGr->setText(QCoreApplication::translate("MainWindow", "Feld Gr\303\266\303\237e", nullptr));
        Zeitspanne->setText(QCoreApplication::translate("MainWindow", "Zeitspanne", nullptr));
        buttonImport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        buttonExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        buttonStopp->setText(QCoreApplication::translate("MainWindow", "Timer stoppen", nullptr));
        buttonReset->setText(QCoreApplication::translate("MainWindow", "Feld Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
