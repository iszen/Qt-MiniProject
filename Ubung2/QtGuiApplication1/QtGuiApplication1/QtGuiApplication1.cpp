#include "QtGuiApplication1.h"
#include "MovingRect.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	MovingRect* rect = new MovingRect(this);
	rect->setStart(QPoint(100, 100));
	rect->setEnd(QPoint(500, 400));
	rect->setColor(QColor(0, 0, 128));
	rect->show();
}
