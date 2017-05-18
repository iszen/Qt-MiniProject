/********************************************************************************
** Form generated from reading UI file 'RubberBanding_GUI_11_05_2017.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUBBERBANDING_GUI_11_05_2017_H
#define UI_RUBBERBANDING_GUI_11_05_2017_H

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

class Ui_RubberBanding_GUI_11_05_2017Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RubberBanding_GUI_11_05_2017Class)
    {
        if (RubberBanding_GUI_11_05_2017Class->objectName().isEmpty())
            RubberBanding_GUI_11_05_2017Class->setObjectName(QStringLiteral("RubberBanding_GUI_11_05_2017Class"));
        RubberBanding_GUI_11_05_2017Class->resize(600, 400);
        menuBar = new QMenuBar(RubberBanding_GUI_11_05_2017Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        RubberBanding_GUI_11_05_2017Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RubberBanding_GUI_11_05_2017Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RubberBanding_GUI_11_05_2017Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(RubberBanding_GUI_11_05_2017Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RubberBanding_GUI_11_05_2017Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RubberBanding_GUI_11_05_2017Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RubberBanding_GUI_11_05_2017Class->setStatusBar(statusBar);

        retranslateUi(RubberBanding_GUI_11_05_2017Class);

        QMetaObject::connectSlotsByName(RubberBanding_GUI_11_05_2017Class);
    } // setupUi

    void retranslateUi(QMainWindow *RubberBanding_GUI_11_05_2017Class)
    {
        RubberBanding_GUI_11_05_2017Class->setWindowTitle(QApplication::translate("RubberBanding_GUI_11_05_2017Class", "RubberBanding_GUI_11_05_2017", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RubberBanding_GUI_11_05_2017Class: public Ui_RubberBanding_GUI_11_05_2017Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUBBERBANDING_GUI_11_05_2017_H
