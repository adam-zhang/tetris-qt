#include "Game.h"
#include "LogicalLayer/Producer.h"
#include "LogicalLayer/GameShape.h"
#include <QTimer>
#include <QDebug>
#include <stdlib.h>
#include <time.h>

Game::Game(QObject* parent)
	: QObject(parent)
	  , timer_(NULL)
{
	initialize();
	srand((int)time(0));
}

Game::~Game()
{
}

void Game::initialize()
{
	cleanGrid();
}

void Game::start()
{
	setCurrent(getShape());
	setCandidate(getShape());
	setCurrentShape(Producer::instance().getGameShape(current()));
	if (!timer_)
	{
		timer_ = new QTimer(this);
		timer_->setInterval(1000);
		connect(timer_, SIGNAL(timeout()), this, SLOT(onTimeout()));
	}
	timer_->start();
}

void Game::pause()
{
	timer_->stop();
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
	for(size_t i = 0; i != ROW; ++i)
		for(size_t j = 0; j != COLUMN; ++j)
			grid_[i][j] = 0;

}

void Game::onTimeout()
{
	emit gridChanged();
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
	setCurrentShape(Producer::instance().getGameShape(current()));
}

void Game::initializeShape()
{
	currentShape()->setX((row() - currentShape()->width())/2);
}
