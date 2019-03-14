#include "Game.h"
#include <QTimer>

Game::Game()
	: timer_(new QTimer)
{
	timer_->setInterval(1000);
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
