#ifndef __AUTHORWIDGET__H
#define __AUTHORWIDGET__H

#include <QWidget>

class AuthorWidget : public QWidget
{
	Q_OBJECT;
public:
	AuthorWidget();
	~AuthorWidget();
public:
	void initialize();
private:
	void openUrl(QString&);
};
#endif//__AUTHORWIDGET__H
