#ifndef __MAINWIDGET__H
#define __MAINWIDGET__H

#include <QWidget>

class GameWidget;
class InformationWidget;

class MainWidget : public QWidget
{
	public:
		explicit MainWidget(QWidget* parent = 0);
		~MainWidget();
	private:
		void initialize();

	private:
		InformationWidget* informationWidget_;
		GameWidget* gameWidget_;
	private:
		void setInformationWidget(InformationWidget* value)
		{ informationWidget_ = value;}
		InformationWidget* informationWidget()
		{ return informationWidget_;}
		void setGameWidget(GameWidget* value)
		{ gameWidget_ = value;}
		GameWidget* gameWidget()
		{ return gameWidget_;}


};

#endif//__MAINWIDGET__H
