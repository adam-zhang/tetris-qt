#include "MainWidget.h"
#include "GameWidget.h"
#include "InformationWidget.h"
#include <QHBoxLayout>

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
	setFixedSize(175 + 50, 400);
	auto layout = new QHBoxLayout(this);
	layout->addWidget(new GameWidget);
	layout->addWidget(new InformationWidget(this));
}

