#include "MainWindow.h"
#include "MainWidget.h"
#include <QMenuBar>
#include <QMessageBox>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	initialize();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	createMenus();
	createStatusbar();
}

void MainWindow::createMenus()
{
	setCentralWidget(new MainWidget(this));
	createFileMenu();
	//createEditMenu();
	//createHelpMenu();
}

void MainWindow::createFileMenu()
{
	QMenu* menu = menuBar()->addMenu("&File");
	auto action = menu->addAction("Exit");
	connect(action, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::createStatusbar()
{
}
