#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGUIApplication_11_05_2017.h"

class QtGUIApplication_11_05_2017 : public QMainWindow
{
	Q_OBJECT

public:
	QtGUIApplication_11_05_2017(QWidget *parent = Q_NULLPTR);

protected:
	void keyPressEvent(QKeyEvent * event) override;
private:
	Ui::QtGUIApplication_11_05_2017Class ui;
	//Ui::QtGUIApplication_11_05_2017Class ui;
};
