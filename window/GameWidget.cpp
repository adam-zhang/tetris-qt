#include "GameWidget.h"
#include "WindowAssistant.h"
#include <QDebug>
#include <QMessageBox>

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
