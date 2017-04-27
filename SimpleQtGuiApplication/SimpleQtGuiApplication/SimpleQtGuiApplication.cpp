#include "SimpleQtGuiApplication.h"
#include "QPushButton.h"

SimpleQtGuiApplication::SimpleQtGuiApplication(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QPushButton *button = new QPushButton("ButtonText", this);
	button->move(200, 100);
	button->resize(40, 100);
	button->show();
}
