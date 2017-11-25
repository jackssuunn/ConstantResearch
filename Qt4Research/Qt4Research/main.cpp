#include "ResearchWindow.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	Q_INIT_RESOURCE(ResearchWindow);
	QApplication a(argc, argv);
	ResearchWindow w;
	w.show();
	return a.exec();
}
