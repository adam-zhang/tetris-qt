#ifndef __INFORMATIONWIDGET__H
#define __INFORMATIONWIDGET__H

#include "../tools/Properties.h"
#include <QWidget>
#include <memory>

class GameShape;

class InformationWidget : public QWidget
{
	public:
		explicit InformationWidget(QWidget* parent = 0);
		~InformationWidget();
	public:
		void paintEvent(QPaintEvent*);
	private:
		void initialize();
		void createWidgets();
	public:
		void updateWindow();

		PROPERTY(std::shared_ptr<GameShape>, shape, setShape);
};
#endif//__INFORMATIONWIDGET__H
