#ifndef __NEXT__H
#define __NEXT__H
#include <QWidget>

class Next : public QWidget
{
public:
	explicit Next(QWidget* parent = 0);
	~Next();
public:
	void updateWindow();
};
#endif//__NEXT__H
