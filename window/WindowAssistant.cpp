#include "WindowAssistant.h"
#include <QWidget>
#include <QPalette>

void WindowAssistant::setBackgroundColor(QWidget* window, int color)
{
	auto palette = window->palette();
	palette.setColor(QPalette::Background, color);
	window->setPalette(palette);
}
