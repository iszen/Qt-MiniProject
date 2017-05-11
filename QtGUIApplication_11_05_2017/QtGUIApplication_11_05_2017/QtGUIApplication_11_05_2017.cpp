#include "QtGUIApplication_11_05_2017.h"
#include <QKeyEvent>
#include <QMessageBox>

//Event-handling 2 Moeglichkeiten: Event handler funktionen oder slot and signals
//
//Hier event handler Funktionen: in basisklasse QWidget event funktionen (zu ueberschreiben)

QtGUIApplication_11_05_2017::QtGUIApplication_11_05_2017(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
}

void QtQtGUIApplication_11_05_2017::keyPressEvent(QKeyEvent* e) {
	if (e->key() == Qt::Key::Key_H) {
		QMessageBox box(QMessageBox::Icon::Question, "Title", "H Pressed");
	}
}
