#include "Line.h"
#include <QPainter>

void Line::paintEvent(QPaintEvent *e)
{
	QPainter painter(this);
	painter.drawLine(m_start, m_end);
}

void Line::recalc() {
	this->resize(m_end.x(), m_end.y());
}