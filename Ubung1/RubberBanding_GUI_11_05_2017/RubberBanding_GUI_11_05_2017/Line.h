#pragma once

#include<QWidget>
#include<QPoint>
#include<QObject>//wegen fehler

class Line : public QWidget
{
	Q_OBJECT//macro fur signal slots

public:
	Line(QWidget *parent) : QWidget(parent) {};

	void setStart(QPoint newStart) {
		m_start = newStart;
	}

	void setEnd(QPoint newEnd) {
		m_end = newEnd;
		recalc();
	}


protected:
	void paintEvent(QPaintEvent *e) override;

private:
	QPoint m_start, m_end;
	void recalc();
};
