#include "Line.h"
#include <QPainter>

void Line::paintEvent(QPaintEvent *e)
{
	QPainter painter(this);
	//position relativ zu linie
	painter.drawLine(m_start - pos(), m_end-pos());
}

//Widgets haben nich nur gruesse sondern auch position
void Line::recalc() {
	this->resize(std::abs(m_start.x()-m_end.x()), abs(m_start.y()-m_end.y())+1);
	move(std::min(m_start.x(), m_end.x()), std::min(m_start.y(), m_end.y()));
}