#include "Game.h"
#include "Producer.h"
#include <QTimer>
#include <QDebug>
#include <stdlib.h>
#include <time.h>

Game::Game()
{
	srand((int)time(0));
}

Game::~Game()
{
}

void Game::run()
{
	//timer_->start();
	setCandidate(getShape());
	setCurrent(getShape());
}

int Game::getShape()
{
	return rand() % 7;
}

void Game::stop()
{
	//timer_->stop();
}

//void Game::onTimeout()
//{
//}

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
