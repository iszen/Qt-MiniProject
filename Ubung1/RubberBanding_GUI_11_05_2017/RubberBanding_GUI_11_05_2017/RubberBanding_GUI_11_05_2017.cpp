#include "RubberBanding_GUI_11_05_2017.h"
#include "Board.h" 
#include "Line.h"

RubberBanding_GUI_11_05_2017::RubberBanding_GUI_11_05_2017(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);

	auto drawBoard = new DrawBoard(this);
	this->setCentralWidget(drawBoard);

	auto line = new Line(drawBoard);
	line->setStart(QPoint(0, 0));
	line->setEnd(QPoint(1500, 1500));
}
