#include "GameWidget.h"
#include "WindowAssistant.h"
#include "Game.h"
#include "Painter.h"
#include "LogicalLayer/GameShape.h"
#include <QDebug>
#include <QPaintEvent>
#include <QPainter>
#include <memory>

using namespace std;

GameWidget::GameWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

GameWidget::~GameWidget()
{
}

void GameWidget::initialize()
{
	WindowAssistant::setBackgroundColor(this, Qt::black);
	setGeometry(0, 0, Game::instance().row() * 20, Game::instance().column() * 20);
}

static void paintGrid(QPainter& painter, const QRect& rect)
{
	QPen pen(Qt::white);
	painter.setPen(pen);
	for(int i = 20; i < rect.height(); i += 20)
		painter.drawLine(0, i, rect.width(), i);
	for(int i = 20; i < rect.width(); i += 20)
		painter.drawLine(i, 0, i, rect.height());

}	

static void paintShape(QPainter& painter, const shared_ptr<GameShape>& shape)
{
	Painter::paintShape(painter, shape);
}

void GameWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	paintGrid(painter, event->rect());
	fillGrid(painter, Game::instance().boxMap());
	qDebug() << "check currentShape";
	if (Game::instance().currentShape())
	{
		paintShape(painter, Game::instance().currentShape());
		qDebug() << "paintShape in GameWidget";
	}
}

void GameWidget::fillGrid(QPainter& painter, const BoxMap& box)
{
}

void GameWidget::updateWindow()
{
	update();
}
