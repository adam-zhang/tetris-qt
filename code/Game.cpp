#include "Game.h"
#include "LogicalLayer/Producer.h"
#include <QTimer>
#include <QDebug>
#include <stdlib.h>
#include <time.h>

Game::Game(QObject* parent)
	: QObject(this)
{
	srand((int)time(0));
}

Game::~Game()
{
}

//void Game::run()
//{
//	//timer_->start();
//	setCandidate(getShape());
//	setCurrent(getShape());
//}
void Game::start()
{
}

void Game::pause()
{
}

int Game::getShape()
{
	return rand() % 7;
}

void Game::stop()
{
	timer_->stop();
	cleanGrid();
}


void Game::cleanGrid()
{

}

void Game::onTimeout()
{
}

void Game::rotate()
{
}

void Game::speed()
{
}

void Game::moveLeft()
{
}

void Game::moveRight()
{
}

void Game::update()
{
	setCandidate(Producer::instance().gameShape());
}

void Game::moveOn()
{
	setCurrent(candidate());
	setCandidate(getShape());
}
