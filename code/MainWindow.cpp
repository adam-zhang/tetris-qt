#include "MainWindow.h"
#include "MainWidget.h"
#include "AboutDialog.h"
#include "Game.h"
#include <QMenuBar>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <QTimer>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	  //, game_(new Game(this))
{
	initialize();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	setWindowFlags(windowFlags() &~ Qt::WindowMinMaxButtonsHint);
	mainWidget_ = new MainWidget(this);
	setCentralWidget(mainWidget_);
	createMenus();
	createStatusbar();
	connect(&Game::instance(), SIGNAL(gridChanged()), this, SLOT(onGridChnaged()));
	connect(&Game::instance(), SIGNAL(candidateChanged()), this, SLOT(onCandidateChanged()));
}

void MainWindow::onGridChnaged()
{
	mainWidget_->refreshGrid();
}

void MainWindow::onCandidateChanged()
{
}

void MainWindow::startTimer()
{
	Game::instance().start();
}

//void MainWindow::onTimeout()
//{
//	//Game::instance().update();
//	mainWidget_->updateWindow();
//	qDebug() << "update mainWidget";
//}

void MainWindow::startGame()
{
	Game::instance().start();
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
		case Qt::Key_Space:
			pauseGame();
			break;
		case Qt::Key_Escape:
			close();
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
	AboutDialog dialog(this);
	dialog.exec();
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
	//game_->stop();
}

void MainWindow::pauseGame()
{
	//game_->pause();
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
	//game_->rotate();
	qDebug() << "rotate";
}

void MainWindow::speed()
{
	//game_->speed();
	qDebug() << "speed";
}

void MainWindow::moveLeft()
{
	//game_->moveLeft();
	qDebug() << "moveLeft";
}

void MainWindow::moveRight()
{
	//game_->moveRight();
	qDebug() << "moveRight";
}

int MainWindow::row()
{
	return Game::instance().row();
}

int MainWindow::column()
{
	return Game::instance().column();
}

