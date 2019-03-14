#include "MainWidget.h"
#include "GameWidget.h"
#include "InformationWidget.h"
#include "LogicalLayer/Game.h"
#include <QHBoxLayout>
#include <QTextEdit>
#include <QSplitter>
#include <QSplitterHandle>
#include <QKeyEvent>
#include <QDebug>

MainWidget::MainWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

MainWidget::~MainWidget()
{
}

void MainWidget::initialize()
{
	createWidgets();
}



void MainWidget::createWidgets()
{
	setFixedSize(20 * 10 + 100, 20 * 18);
	auto layout = new QHBoxLayout(this);
	auto splitter = new QSplitter;
	splitter->addWidget(new GameWidget);
	splitter->addWidget(new InformationWidget);
	auto handle = splitter->handle(1);
	handle->setDisabled(true);
	splitter->setHandleWidth(1);
	splitter->setStretchFactor(1, 100);
	layout->addWidget(splitter);
}

