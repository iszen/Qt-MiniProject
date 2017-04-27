#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimpleQtGuiApplication.h"

class SimpleQtGuiApplication : public QMainWindow
{
    Q_OBJECT

public:
    SimpleQtGuiApplication(QWidget *parent = Q_NULLPTR);
public slots:
	void ola();
private:
    Ui::SimpleQtGuiApplicationClass ui;
};
