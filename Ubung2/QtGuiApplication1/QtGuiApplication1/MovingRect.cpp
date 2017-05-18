#include "MovingRect.h"
#include <QPainter>
#include <QMouseEvent>

void MovingRect::recalc() {
	resize(std::abs(m_start.x() - m_end.x()), std::abs(m_start.y() - m_end.y())+1);
	move(std::min(m_start.x(), m_end.x()), std::min(m_start.y(), m_end.y()));
}

void MovingRect::paintEvent(QPaintEvent* e) {
	QPainter painter(this);
	painter.fillRect(this->rect(), m_color);
}

void MovingRect::mousePressEvent(QMouseEvent* e) {
	if (e->button() == Qt::MouseButton::LeftButton) {
		m_state = 1;
	}
}

void MovingRect::mouseReleaseEvent(QMouseEvent* e) {
	if (e->button() == Qt::MouseButton::LeftButton) {
		m_state = 0;
	}
}

void MovingRect::mouseMoveEvent(QMouseEvent* e) {
	if (m_state == 1) {
		move(e->pos() + pos());
	}
}
