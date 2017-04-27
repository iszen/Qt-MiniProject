#pragma once

#pragma once

#include<QWidget>
class MyWidget : public QWidget
{
public:
	MyWidget(QWidget *parent = NULL);

protected:
	void paintEvent(QPaintEvent *e) override;
};