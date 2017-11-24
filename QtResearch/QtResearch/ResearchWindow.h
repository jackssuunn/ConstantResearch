#ifndef RESEARCHWINDOW_H
#define RESEARCHWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_ResearchWindow.h"

class ResearchWindow : public QMainWindow
{
	Q_OBJECT

public:
	ResearchWindow(QWidget *parent = 0);
	~ResearchWindow();

private:
	Ui::ResearchWindowClass ui;
};

#endif // RESEARCHWINDOW_H
