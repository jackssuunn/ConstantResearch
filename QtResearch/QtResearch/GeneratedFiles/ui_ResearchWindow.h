/********************************************************************************
** Form generated from reading UI file 'ResearchWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESEARCHWINDOW_H
#define UI_RESEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
            ResearchWindowClass->setObjectName(QStringLiteral("ResearchWindowClass"));
        ResearchWindowClass->resize(600, 400);
        menuBar = new QMenuBar(ResearchWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ResearchWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ResearchWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ResearchWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ResearchWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ResearchWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ResearchWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ResearchWindowClass->setStatusBar(statusBar);

        retranslateUi(ResearchWindowClass);

        QMetaObject::connectSlotsByName(ResearchWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ResearchWindowClass)
    {
        ResearchWindowClass->setWindowTitle(QApplication::translate("ResearchWindowClass", "ResearchWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ResearchWindowClass: public Ui_ResearchWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESEARCHWINDOW_H
