#include "InformationWidget.h"
#include "WindowAssistant.h"
#include "LogicalLayer/Game.h"
#include "LogicalLayer/Producer.h"
#include "Painter.h"
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
	if (!shape())
		return;
	QPainter painter(this);
	auto rect = geometry();
	painter.drawRect(0, 0, rect.width(), rect.height());
	Painter::paintShape(painter,  shape());
}

void InformationWidget::initialize()
{
	WindowAssistant::setBackgroundColor(this, Qt::black);
}

void InformationWidget::updateWindow()
{
	auto shape = Game::instance().candidate();
	setShape(Producer::instance().getGameShape(shape));
	update();
}
