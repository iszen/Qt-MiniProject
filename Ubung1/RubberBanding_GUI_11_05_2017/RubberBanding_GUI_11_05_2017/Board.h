#pragma once

#include<QWidget>
#include<QObject>

#include "Line.h"
class DrawBoard : public QWidget
{
	Q_OBJECT

public:
	DrawBoard(QWidget *parent) : QWidget(parent) {};
protected:
	void paintEvent(QPaintEvent *e) override;
	void mousePressEvent(QMouseEvent *e) override;
	void mouseReleaseEvent(QMouseEvent *e) override;
	void mouseMoveEvent(QMouseEvent *e) override;
private:
	int m_state = 0;
	Line *m_currentLine;
};