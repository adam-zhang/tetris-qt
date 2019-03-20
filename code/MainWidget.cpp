#include "MainWidget.h"
#include "MainWindow.h"
#include "GameWidget.h"
#include "InformationWidget.h"
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
	auto parent = static_cast<MainWindow*>(parentWidget());
	setFixedSize(parent->row() * 20 + 100, parent->column() * 20);
	auto layout = new QHBoxLayout(this);
	auto splitter = new QSplitter;
	gameWidget_ = new GameWidget;
	splitter->addWidget(gameWidget_);
	informationWidget_ = new InformationWidget;
	splitter->addWidget(informationWidget_);
	auto handle = splitter->handle(1);
	handle->setDisabled(true);
	splitter->setStretchFactor(1, 100);
	layout->addWidget(splitter);
}

void MainWidget::updateWindow()
{
	informationWidget_->updateWindow();
	gameWidget_->updateWindow();
}

void MainWidget::refreshGrid()
{
	gameWidget_->updateWindow();
}
