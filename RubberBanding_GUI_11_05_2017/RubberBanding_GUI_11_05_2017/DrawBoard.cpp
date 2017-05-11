#include <Board.h>
#include <QPainter>

void DrawBoard::paintEvent(QPaintEvent *e) {
	QPainter painter(this);
	painter.fillRect(rect(), QColor(255, 255, 255));
}