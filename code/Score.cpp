#include "Score.h"
#include <QHBoxLayout>
#include <QLabel>

Score::Score(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

Score::~Score()
{
}

void Score::initialize()
{
	auto layout = new QHBoxLayout(this);
	auto label_ = new QLabel("Hello");
	layout->addWidget(label_);
}
