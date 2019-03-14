#include "Game.h"
#include <QTimer>
#include <QDebug>
#include <stdlib.h>
#include <time.h>

Game::Game()
	: timer_(new QTimer(this))
{
	timer_->setInterval(1000);
	connect(timer_, SIGNAL(timeout()), this, SLOT(onTimeout()));
	srand((int)time(0));
}

Game::~Game()
{
}

void Game::run()
{
	timer_->start();
	setCandidate(getShape());
	setCurrent(getShape());
}

int Game::getShape()
{
	return rand() % 7;
}

void Game::stop()
{
	timer_->stop();
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
