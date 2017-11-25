/********************************************************************************
** Form generated from reading UI file 'ResearchWindow.ui'
**
** Created: Sat Nov 25 19:51:15 2017
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESEARCHWINDOW_H
#define UI_RESEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResearchWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ResearchWindowClass)
    {
        if (ResearchWindowClass->objectName().isEmpty())
            ResearchWindowClass->setObjectName(QString::fromUtf8("ResearchWindowClass"));
        ResearchWindowClass->resize(600, 400);
        menuBar = new QMenuBar(ResearchWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ResearchWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ResearchWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ResearchWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ResearchWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ResearchWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ResearchWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ResearchWindowClass->setStatusBar(statusBar);

        retranslateUi(ResearchWindowClass);

        QMetaObject::connectSlotsByName(ResearchWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ResearchWindowClass)
    {
        ResearchWindowClass->setWindowTitle(QApplication::translate("ResearchWindowClass", "ResearchWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ResearchWindowClass: public Ui_ResearchWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESEARCHWINDOW_H
