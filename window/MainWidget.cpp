#include "MainWidget.h"
#include "GameWidget.h"
#include "InformationWidget.h"
#include <QHBoxLayout>
#include <QTextEdit>
#include <QSplitter>
#include <QSplitterHandle>

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
	setFixedSize(175 + 50 + 100, 400);
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

