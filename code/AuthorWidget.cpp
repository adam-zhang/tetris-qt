#include "AuthorWidget.h"
#include <QGridLayout>
#include <QLabel>
#include <QDesktopServices>
#include <QUrl>

AuthorWidget::AuthorWidget()
{
	initialize();
}

AuthorWidget::~AuthorWidget()
{
}

void AuthorWidget::initialize()
{
	auto layout = new QGridLayout(this);
	layout->addWidget(new QLabel("Author:"), 0, 0, Qt::AlignRight);
	layout->addWidget(new QLabel("Mingping (Adam) Zhang"), 0, 1);
	layout->addWidget(new QLabel("EMail:"), 1, 0, Qt::AlignRight);
	auto mail = new QLabel("<a href mailto@mingpingzhang@163.com> mingpingzhang@163.com </a>");
	connect(mail, SIGNAL(linkActivated(QString)), this, SLOT(onOpenUrl(QString&)));
	layout->addWidget(mail, 1, 1);
}

void AuthorWidget::openUrl(QString& url)
{
	QDesktopServices::openUrl(QUrl(url));
}
