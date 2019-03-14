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
		void onKeyPress(QKeyEvent*);
	private:
		void rotate();
		void speed();
		void moveLeft();
		void moveRight();
		void startGame();
};

#endif//__MAINWIDGET__H
