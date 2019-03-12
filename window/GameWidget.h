#ifndef __GAMEWIDGET__H
#define __GAMEWIDGET__H

#include <QWidget>

class GameWidget : public QWidget 
{
	public:
		GameWidget(QWidget* parent = 0);
		~GameWidget();
	public:
		void initialize();

};
#endif//__GAMEWIDGET__H
