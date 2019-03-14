#include "InformationWidget.h"
#include "WindowAssistant.h"
#include "LogicalLayer/Game.h"
#include "LogicalLayer/Producer.h"
#include <QPainter>
#include <QPaintEvent>

InformationWidget::InformationWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

InformationWidget::~InformationWidget()
{
}

void InformationWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
}

void InformationWidget::initialize()
{
	WindowAssistant::setBackgroundColor(this, Qt::blue);
}

void InformationWidget::updateWindow()
{
	auto shape = Game::instance().candidate();
	setShape(Producer::instance().getGameShape(shape));
	update();
}
