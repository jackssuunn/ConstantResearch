#include "ResearchWindow.h"
#include "HelloGlWidget.h"
#include "FrameBufferGLWidget.h"
#include "GrabGLWidget.h"

ResearchWindow::ResearchWindow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	HelloGlWidget* helloGLWidget = new HelloGlWidget;
	FrameBufferGLWidget* frameBuffGLWidget = new FrameBufferGLWidget;
	GrabGLWidget* grabGLWidget = new GrabGLWidget;
	QHBoxLayout* hLayout = new QHBoxLayout;
	hLayout->addWidget(helloGLWidget);
	hLayout->addWidget(grabGLWidget);
	hLayout->addWidget(frameBuffGLWidget);
	centralWidget()->setLayout(hLayout);
}

ResearchWindow::~ResearchWindow()
{

}
