#ifndef __INFORMATIONWIDGET__H
#define __INFORMATIONWIDGET__H

#include <QWidget>

class InformationWidget : public QWidget
{
	public:
		explicit InformationWidget(QWidget* parent = 0);
		~InformationWidget();
	public:
		void paintEvent(QPaintEvent*);
	private:
		void initialize();
};
#endif//__INFORMATIONWIDGET__H
