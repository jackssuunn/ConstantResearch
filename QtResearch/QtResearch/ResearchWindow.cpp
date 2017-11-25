#include "ResearchWindow.h"
#include "HelloGlWidget.h"
#include <QHBoxLayout>

ResearchWindow::ResearchWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	HelloGlWidget* glWidget = new HelloGlWidget;
	QHBoxLayout* hLayout = new QHBoxLayout;
	hLayout->addWidget(glWidget);
	centralWidget()->setLayout(hLayout);

}

ResearchWindow::~ResearchWindow()
{

}
