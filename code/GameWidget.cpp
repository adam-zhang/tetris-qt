#include "GameWidget.h"
#include "WindowAssistant.h"
#include <QDebug>
#include <QMessageBox>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>

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
	setGeometry(0, 0, 200, 175);
}

void paintGrid(QPainter& painter, const QRect& rect)
{
	QPen pen(Qt::white);
	painter.setPen(pen);
	for(int i = 10; i < rect.height(); i += 10)
		painter.drawLine(0, i, rect.width(), i);
	for(int i = 10; i < rect.width(); i += 10)
		painter.drawLine(i, 0, i, rect.height());

}	

void GameWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	paintGrid(painter, event->rect());
}
