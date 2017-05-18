#include <Board.h>
#include <QPainter>
#include <QMouseEvent>
#include "Line.h"

void DrawBoard::paintEvent(QPaintEvent *e) {
	QPainter painter(this);
	painter.fillRect(rect(), QColor(255, 255, 255));
}

void DrawBoard::mousePressEvent(QMouseEvent *e) {
	if (e->button() == Qt::MouseButton::LeftButton) {
		m_currentLine = new Line(this);
		m_currentLine->setStart(e->pos());
		m_currentLine->setEnd(e->pos());
		m_state = 1; //mouse pressed
		m_currentLine->show();
	}
}

void DrawBoard::mouseReleaseEvent(QMouseEvent *e) {
	if (e->button() == Qt::MouseButton::LeftButton) {
		m_currentLine->setEnd(e->pos());
		m_state = 0;
	}
}

void DrawBoard::mouseMoveEvent(QMouseEvent *e) {
	
	if (m_state == 1) {
		m_currentLine->setEnd(e->pos());
	}
}