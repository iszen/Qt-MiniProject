/********************************************************************************
** Form generated from reading UI file 'SimpleQtGuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEQTGUIAPPLICATION_H
#define UI_SIMPLEQTGUIAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleQtGuiApplicationClass
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimpleQtGuiApplicationClass)
    {
        if (SimpleQtGuiApplicationClass->objectName().isEmpty())
            SimpleQtGuiApplicationClass->setObjectName(QStringLiteral("SimpleQtGuiApplicationClass"));
        SimpleQtGuiApplicationClass->resize(600, 400);
        actionExit = new QAction(SimpleQtGuiApplicationClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(SimpleQtGuiApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SimpleQtGuiApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SimpleQtGuiApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        SimpleQtGuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SimpleQtGuiApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SimpleQtGuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimpleQtGuiApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimpleQtGuiApplicationClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(SimpleQtGuiApplicationClass);

        QMetaObject::connectSlotsByName(SimpleQtGuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleQtGuiApplicationClass)
    {
        SimpleQtGuiApplicationClass->setWindowTitle(QApplication::translate("SimpleQtGuiApplicationClass", "SimpleQtGuiApplication", Q_NULLPTR));
        actionExit->setText(QApplication::translate("SimpleQtGuiApplicationClass", "Exit", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("SimpleQtGuiApplicationClass", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimpleQtGuiApplicationClass: public Ui_SimpleQtGuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEQTGUIAPPLICATION_H
