/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *radiusLabel;
    QLabel *arealabel_1;
    QLabel *arealabel_2;
    QLineEdit *radiuslineEdit;
    QPushButton *countBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        radiusLabel = new QLabel(centralwidget);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setGeometry(QRect(40, 130, 71, 21));
        arealabel_1 = new QLabel(centralwidget);
        arealabel_1->setObjectName(QString::fromUtf8("arealabel_1"));
        arealabel_1->setGeometry(QRect(290, 130, 61, 21));
        arealabel_2 = new QLabel(centralwidget);
        arealabel_2->setObjectName(QString::fromUtf8("arealabel_2"));
        arealabel_2->setGeometry(QRect(390, 120, 111, 31));
        arealabel_2->setFrameShape(QFrame::Panel);
        arealabel_2->setFrameShadow(QFrame::Sunken);
        radiuslineEdit = new QLineEdit(centralwidget);
        radiuslineEdit->setObjectName(QString::fromUtf8("radiuslineEdit"));
        radiuslineEdit->setGeometry(QRect(120, 122, 121, 31));
        countBtn = new QPushButton(centralwidget);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        countBtn->setGeometry(QRect(390, 223, 111, 51));
        countBtn->setIconSize(QSize(32, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        radiusLabel->setText(QCoreApplication::translate("MainWindow", "\345\215\212\345\276\204", nullptr));
        arealabel_1->setText(QCoreApplication::translate("MainWindow", "\351\235\242\347\247\257", nullptr));
        arealabel_2->setText(QString());
        countBtn->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
