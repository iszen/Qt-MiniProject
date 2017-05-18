#pragma once
#include <QWidget>
#include <QPoint>
class MovingRect : public QWidget {
public:
	MovingRect(QWidget *parent) : QWidget(parent) {}
	void setStart(QPoint strt) { m_start = strt; recalc(); }
	void setEnd(QPoint end) { m_end = end; recalc(); }
	void setColor(QColor color) { m_color = color; }
protected:
	void paintEvent(QPaintEvent *e) override;
	void mouseMoveEvent(QMouseEvent *e) override;
	void mousePressEvent(QMouseEvent *e) override;
	void mouseReleaseEvent(QMouseEvent *e) override;
private:
	void recalc();
	QPoint m_start, m_end;
	QColor m_color;
	int m_state = 0;
};
