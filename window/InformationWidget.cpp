#include "InformationWidget.h"
#include "WindowAssistant.h"
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
	painter.drawLine(0, 0, event->rect().width(), event->rect().height());
}

void InformationWidget::initialize()
{
	WindowAssistant::setBackgroundColor(this, Qt::blue);
}
