#ifndef __MAINWIDGET__H
#define __MAINWIDGET__H

#include <QWidget>

class GameWidget;
class InformationWidget;

class MainWidget : public QWidget
{
	Q_OBJECT;
	public:
		explicit MainWidget(QWidget* parent = 0);
		~MainWidget();
	private:
		void initialize();
		void createWidgets();
	public:
		void updateWindow();
	private:
		InformationWidget* informationWidget_;
		GameWidget* gameWidget_;
	private:
	private:
		void setInformationWidget(InformationWidget* value)
		{ informationWidget_ = value;}
		InformationWidget* informationWidget()
		{ return informationWidget_;}
		void setGameWidget(GameWidget* value)
		{ gameWidget_ = value;}
		GameWidget* gameWidget()
		{ return gameWidget_;}
	private slots:
	protected:
};

#endif//__MAINWIDGET__H
