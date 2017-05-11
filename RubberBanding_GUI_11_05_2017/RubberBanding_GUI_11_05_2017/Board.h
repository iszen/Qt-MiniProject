#pragma once

#include<QWidget>
#include<QObject>

class DrawBoard : public QWidget
{
	Q_OBJECT

public:
	DrawBoard(QWidget *parent) : QWidget(parent) {};
protected:
	void paintEvent(QPaintEvent *e) override;
};