#ifndef RESEARCHWINDOW_H
#define RESEARCHWINDOW_H

#include <QtGui/QMainWindow>
#include "ui_ResearchWindow.h"

class ResearchWindow : public QMainWindow
{
	Q_OBJECT

public:
	ResearchWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ResearchWindow();

private:
	Ui::ResearchWindowClass ui;
};

#endif // RESEARCHWINDOW_H
