#include "AboutDialog.h"
#include "AuthorWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

AboutDialog::AboutDialog(QWidget* parent)
	: QDialog(parent)
{
	initialize();
}

AboutDialog::~AboutDialog()
{
}

void AboutDialog::initialize()
{
	//setFixedSize(200, 100);
	createWidgets();
}

QLayout* createWidgetsLayout()
{
	auto layout = new QHBoxLayout;
	layout->addWidget(new QWidget);
	layout->addWidget(new AuthorWidget);
	layout->addWidget(new QWidget);
	return layout;
}

void AboutDialog::createWidgets()
{
	auto layout = new QVBoxLayout(this);
	layout->addLayout(createWidgetsLayout());
	auto button = new QPushButton("OK");
	connect(button, SIGNAL(clicked()), this, SLOT(close()));
	layout->addWidget(button, 0, Qt::AlignCenter);
}
