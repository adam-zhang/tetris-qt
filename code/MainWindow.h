#ifndef __MAINWINDOW__H
#define __MAINWINDOW__H

#include <QMainWindow>


class MainWindow : public QMainWindow
{
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


};
#endif//__MAINWINDOW__H
