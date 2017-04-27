#include <MyWidget.h>
#include <QPainter>
#include <qpushbutton.h>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)//super() in java
{
	
}

void MyWidget::paintEvent(QPaintEvent *e) 
{
	//QPushButton::paintEvent();
	QPainter painter(this);
	painter.drawEllipse(this->rect());//statt rect konnte man auch size nehmen
}