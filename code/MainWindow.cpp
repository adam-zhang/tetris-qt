#include "MainWindow.h"
#include "MainWidget.h"
#include "LogicalLayer/Game.h"
#include <QMenuBar>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <QTimer>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	  , timer_(new QTimer(this))
{
	initialize();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	setWindowFlags(windowFlags() &~ Qt::WindowMinMaxButtonsHint);
	mainWidget_ = new MainWidget;
	setCentralWidget(mainWidget_);
	createMenus();
	createStatusbar();
}

void MainWindow::startTimer()
{
	timer_->setInterval(1000);
	connect(timer_, SIGNAL(timeout()), this, SLOT(onTimeout()));
	timer_->start();
}

void MainWindow::onTimeout()
{
	Game::instance().update();
	mainWidget_->updateWindow();
	qDebug() << "update mainWidget";
}

void MainWindow::startGame()
{
	Game::instance().run();
	startTimer();
}


void MainWindow::keyPressEvent(QKeyEvent* event)
{
	switch(event->key())
	{
		case Qt::Key_Up:
		case Qt::Key_W:
			rotate();
			break;
		case Qt::Key_Down:
		case Qt::Key_S:
			speed();
			break;
		case Qt::Key_Left:
		case Qt::Key_A:
			moveLeft();
			break;
		case Qt::Key_Right:
		case Qt::Key_D:
			moveRight();
			break;
	};
}

void MainWindow::createMenus()
{
	createFileMenu();
	createGameMenu();
	//createEditMenu();
	createHelpMenu();
}

void MainWindow::createHelpMenu()
{
	auto menu = menuBar()->addMenu("&Help");
	auto action = menu->addAction("&About");
	connect(action, SIGNAL(triggered()), this, SLOT(onAbout()));
}

void MainWindow::onAbout()
{
}

void MainWindow::createGameMenu()
{
	auto menu = menuBar()->addMenu("&Game");
	auto action = menu->addAction("&Start Game"); 
	connect(action, SIGNAL(triggered()), this, SLOT(onStartGame()));
	action = menu->addAction("S&top Game");
	connect(action, SIGNAL(triggered()), this, SLOT(onStopGame()));
}

void MainWindow::onStartGame()
{
	startGame();
	qDebug() << "StartGame";
}

void MainWindow::onStopGame()
{
	stopGame();
	qDebug() << "StopGame";
}

void MainWindow::stopGame()
{
	timer_->stop();
}

void MainWindow::createFileMenu()
{
	QMenu* menu = menuBar()->addMenu("&File");
	auto action = menu->addAction("E&xit");
	connect(action, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::createStatusbar()
{
}

void MainWindow::rotate()
{
	Game::instance().rotate();
	qDebug() << "rotate";
}

void MainWindow::speed()
{
	Game::instance().speed();
	qDebug() << "speed";
}

void MainWindow::moveLeft()
{
	Game::instance().moveLeft();
	qDebug() << "moveLeft";
}

void MainWindow::moveRight()
{
	Game::instance().moveRight();
	qDebug() << "moveRight";
}
