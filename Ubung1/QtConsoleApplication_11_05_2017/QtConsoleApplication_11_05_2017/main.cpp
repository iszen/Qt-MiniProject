#include <QApplication>
#include <cstdio>
#include <iostream>

#include <QMessageBox>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	auto modifiers = QApplication::queryKeyboardModifiers();

	//Sampling mode
	//
	//while (true)
	//{
	//	modifiers = QApplication::queryKeyboardModifiers();
	//	if (modifiers & Qt::KeyboardModifier::AltModifier) {
	//		std::cout << "Alt pressed" << std::endl;
	//	}
	//	if (modifiers & Qt::KeyboardModifier::ControlModifier) {
	//		std::cout << "Control pressed" << std::endl;
	//	}
	//	if (modifiers & Qt::KeyboardModifier::ShiftModifier) {
	//		std::cout << "Shift pressed" << std::endl;
	//	}

	//	//Not to detect all events
	//	_sleep(1000);
	//}

	//Request mode
	//
	QMessageBox box(QMessageBox::Icon::Warning, "Title", "RequestContent", QMessageBox::StandardButton::Ok | QMessageBox::StandardButton::Cancel);
	auto res = box.exec();
	switch (res) {
	case QMessageBox::StandardButton::Ok:
		//Do smthin
		break;
	case QMessageBox::StandardButton::Cancel:
		//do smthin
		break;
	}
	return 0;
}
