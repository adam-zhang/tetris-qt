#ifndef __MAINWINDOW__H
#define __MAINWINDOW__H

#include <QMainWindow>

//class QTimer;
class MainWidget;
class Game;

class MainWindow : public QMainWindow
{
	Q_OBJECT;
	public:
		MainWindow(QWidget* parent = 0);
		~MainWindow();
	public:
	private:
		void initialize();
		void createMenus();
		void createStatusbar();
		void createFileMenu();
		void createEditMenu();
		void createHelpMenu();
		void createGameMenu();
		void startTimer();
	private slots:
		//void onTimeout();
		void onStartGame();
		void onStopGame();
		void onAbout();
		void onCandidateChanged();
		void onGridChnaged();
	protected:
		virtual void keyPressEvent(QKeyEvent*);
	private:
		void rotate();
		void speed();
		void moveLeft();
		void moveRight();
		void startGame();
		void stopGame();
		void pauseGame();
	private:
	//	QTimer* timer_;
		MainWidget* mainWidget_;
		Game* game_;
};
#endif//__MAINWINDOW__H
