#include "WindowAssistant.h"
#include <QWidget>
#include <QPalette>

void WindowAssistant::setBackgroundColor(QWidget* window, const QColor& color)
{
	window->setAutoFillBackground(true);
	auto p = window->palette();
	p.setColor(QPalette::Background, color);
	window->setPalette(p);
}
