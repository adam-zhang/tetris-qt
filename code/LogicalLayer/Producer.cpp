#include "Producer.h"
#include "GameShape.h"
#include <cassert>
#include <stdlib.h>
#include <time.h>
#include <QDebug>

using namespace std;

Producer::Producer()
{
	auto seed = (unsigned int)time(0);
	srand(seed);
}

Producer::~Producer()
{
}


static shared_ptr<GameShape> makeIShape()
{
	auto p = make_shared<GameShape>();
	p->shape()[0][0] = 1;
	p->shape()[0][1] = 1;
	p->shape()[0][2] = 1;
	p->shape()[0][3] = 1;
	p->setWidth(1);
	p->setHeight(4);
	
	return p;
}

static shared_ptr<GameShape> makeSShape()
{
	auto p = make_shared<GameShape>();
	p->setWidth(3);
	p->setHeight(2);
	p->shape()[0][1] = 1;
	p->shape()[0][2] = 1;
	p->shape()[1][0] = 1;
	p->shape()[1][1] = 1;
	return p;
}

static shared_ptr<GameShape> makeTShape()
{
	auto p = make_shared<GameShape>();
	p->setWidth(3);
	p->setHeight(2);
	p->shape()[0][0] = 1;
	p->shape()[0][1] = 1;
	p->shape()[0][2] = 1;
	p->shape()[1][1] = 1;
	return p;
}

shared_ptr<GameShape> makeZShape()
{
	auto p = make_shared<GameShape>();
	p->setWidth(3);
	p->setHeight(2);
	p->shape()[0][0] = 1;
	p->shape()[0][1] = 1;
	p->shape()[1][1] = 1;
	p->shape()[1][2] = 1;
	return p;
}


static shared_ptr<GameShape> makeJShape()
{
	auto p = make_shared<GameShape>();
	p->setWidth(2);
	p->setHeight(3);
	p->shape()[0][1] = 1;
	p->shape()[1][1] = 1;
	p->shape()[2][1] = 1;
	p->shape()[2][0] = 1;
	return p;
}

static shared_ptr<GameShape> makeLShape()
{
	auto p = make_shared<GameShape>();
	p->setWidth(2);
	p->setHeight(3);
	p->shape()[0][0] = 1;
	p->shape()[1][0] = 1;
	p->shape()[2][0] = 1;
	p->shape()[2][1] = 1;
	return p;
}

static shared_ptr<GameShape> makeOShape()
{
	auto p = make_shared<GameShape>();
	p->setWidth(2);
	p->setHeight(2);
	p->shape()[0][0] = 1;
	p->shape()[0][1] = 1;
	p->shape()[1][0] = 1;
	p->shape()[1][1] = 1;
	return p;
}


shared_ptr<GameShape> Producer::getGameShape(int shape)
{
	qDebug() << "shape in getGameShape" << shape ;
	switch(shape)
	{
		case GameShape::IShape: return makeIShape();
		case GameShape::SShape: return makeSShape();
		case GameShape::ZShape: return makeZShape();
		case GameShape::JShape: return makeJShape();
		case GameShape::LShape: return makeLShape();
		case GameShape::OShape: return makeOShape();
		case GameShape::TShape: return makeTShape();
	}
	assert(false);
	return make_shared<GameShape>();
}

int Producer::gameShape()
{
	return rand() % 7;
}



