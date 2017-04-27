#include "SimpleQtGuiApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleQtGuiApplication w;
    w.show();
    return a.exec();
}
