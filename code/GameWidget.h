#ifndef __GAMEWIDGET__H
#define __GAMEWIDGET__H

#include "tools/tool.h"
#include <QWidget>
#include <array>

class QPainter; 

class GameWidget : public QWidget 
{
	public:
		GameWidget(QWidget* parent = 0);
		~GameWidget();
	public:
		void initialize();
	protected:
		void paintEvent(QPaintEvent*);
	private:
		void fillGrid(QPainter& painter, const BoxMap& map);
	public:
		void updateWindow();

};
#endif//__GAMEWIDGET__H
