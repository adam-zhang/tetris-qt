#include "Game.h"
#include <QTimer>

Game::Game()
	: timer_(new QTimer(this))
{
	timer_->setInterval(1000);
	connect(timer_, SIGNAL(timeout()), this, SLOT(onTimeout()));
}

Game::~Game()
{
}

void Game::run()
{
	timer_->start();
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
