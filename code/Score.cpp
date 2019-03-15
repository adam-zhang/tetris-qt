#include "Score.h"
#include <QHBoxLayout>
#include <QLabel>

Score::Score(QWidget* parent)
	: QWidget(parent)
	  , label_(NULL)
{
	initialize();
}

Score::~Score()
{
}

void Score::initialize()
{
	auto layout = new QHBoxLayout(this);
	label_ = new QLabel("Hello");
	layout->addWidget(label_);
}

void Score::setScore(int value)
{
	auto s = QString("%1").arg(value);
	label_->setText(s);
}
