/********************************************************************************
** Form generated from reading UI file 'serverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWINDOW_H
#define UI_SERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startServerButton;
    QPushButton *stopServerButton;
    QTextEdit *logTextEdit;

    void setupUi(QMainWindow *ServerWindow)
    {
        if (ServerWindow->objectName().isEmpty())
            ServerWindow->setObjectName(QString::fromUtf8("ServerWindow"));
        ServerWindow->resize(600, 400);
        centralwidget = new QWidget(ServerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startServerButton = new QPushButton(centralwidget);
        startServerButton->setObjectName(QString::fromUtf8("startServerButton"));
        startServerButton->setGeometry(QRect(50, 20, 120, 40));
        stopServerButton = new QPushButton(centralwidget);
        stopServerButton->setObjectName(QString::fromUtf8("stopServerButton"));
        stopServerButton->setGeometry(QRect(200, 20, 120, 40));
        logTextEdit = new QTextEdit(centralwidget);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setGeometry(QRect(50, 80, 500, 250));
        logTextEdit->setReadOnly(true);
        ServerWindow->setCentralWidget(centralwidget);

        retranslateUi(ServerWindow);

        QMetaObject::connectSlotsByName(ServerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ServerWindow)
    {
        ServerWindow->setWindowTitle(QCoreApplication::translate("ServerWindow", "\350\201\212\345\244\251\345\256\244\346\234\215\345\212\241\345\231\250", nullptr));
        startServerButton->setText(QCoreApplication::translate("ServerWindow", "\345\220\257\345\212\250\346\234\215\345\212\241\345\231\250", nullptr));
        stopServerButton->setText(QCoreApplication::translate("ServerWindow", "\345\201\234\346\255\242\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWindow: public Ui_ServerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWINDOW_H
