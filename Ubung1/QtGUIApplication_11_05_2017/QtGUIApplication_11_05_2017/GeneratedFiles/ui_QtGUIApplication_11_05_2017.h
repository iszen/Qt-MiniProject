/********************************************************************************
** Form generated from reading UI file 'QtGUIApplication_11_05_2017.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION_11_05_2017_H
#define UI_QTGUIAPPLICATION_11_05_2017_H

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

class Ui_QtGUIApplication_11_05_2017Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGUIApplication_11_05_2017Class)
    {
        if (QtGUIApplication_11_05_2017Class->objectName().isEmpty())
            QtGUIApplication_11_05_2017Class->setObjectName(QStringLiteral("QtGUIApplication_11_05_2017Class"));
        QtGUIApplication_11_05_2017Class->resize(600, 400);
        menuBar = new QMenuBar(QtGUIApplication_11_05_2017Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGUIApplication_11_05_2017Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGUIApplication_11_05_2017Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGUIApplication_11_05_2017Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGUIApplication_11_05_2017Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGUIApplication_11_05_2017Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGUIApplication_11_05_2017Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGUIApplication_11_05_2017Class->setStatusBar(statusBar);

        retranslateUi(QtGUIApplication_11_05_2017Class);

        QMetaObject::connectSlotsByName(QtGUIApplication_11_05_2017Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGUIApplication_11_05_2017Class)
    {
        QtGUIApplication_11_05_2017Class->setWindowTitle(QApplication::translate("QtGUIApplication_11_05_2017Class", "QtGUIApplication_11_05_2017", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGUIApplication_11_05_2017Class: public Ui_QtGUIApplication_11_05_2017Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION_11_05_2017_H
