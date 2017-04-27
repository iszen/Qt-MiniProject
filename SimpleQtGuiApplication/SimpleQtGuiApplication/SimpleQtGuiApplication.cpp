#include "SimpleQtGuiApplication.h"
#include "QPushButton.h"
#include "MyWidget.h"

SimpleQtGuiApplication::SimpleQtGuiApplication(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QPushButton *button = new QPushButton("ButtonText", this);
	button->move(200, 100);
	button->resize(40, 100);
	button->show();

	MyWidget *myWidget = new MyWidget(this);
	myWidget->move(500, 250);
	myWidget->resize(100, 100);
	myWidget->show();

}
