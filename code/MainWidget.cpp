#include "MainWidget.h"
#include "GameWidget.h"
#include "InformationWidget.h"
#include "LogicalLayer/Game.h"
#include <QHBoxLayout>
#include <QTextEdit>
#include <QSplitter>
#include <QSplitterHandle>
#include <QKeyEvent>

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
	startGame();
}

void MainWidget::startGame()
{
	Game::instance().run();
}

void MainWidget::onKeyPress(QKeyEvent* event)
{
	switch(event->key())
	{
		case Qt::Key_Up:
		case Qt::Key_W:
			rotate();
			break;
		case Qt::Key_Down:
		case Qt::Key_S:
			speed();
			break;
		case Qt::Key_Left:
		case Qt::Key_A:
			moveLeft();
			break;
		case Qt::Key_Right:
		case Qt::Key_D:
			moveRight();
			break;
	};
}

void MainWidget::rotate()
{
}

void MainWidget::speed()
{
}

void MainWidget::moveLeft()
{
}

void MainWidget::moveRight()
{
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

