#include <QApplication>
#include <QDesktopWidget>
#include "MainWindow.h"

int main(int argc, char** argv)
{
	QApplication a(argc, argv);
	MainWindow w;
	auto desktop = QApplication::desktop();
	w.show();
	w.move((desktop->width() - w.width())/2, (desktop->height() - w.height()) / 2);
	return a.exec();
}

