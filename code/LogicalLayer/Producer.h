#ifndef __PRODUCER__H
#define __PRODUCER__H

#include "../tools/Singleton.h"
#include <memory>

class GameShape;

class Producer : public Singleton<Producer>
{
public:
	Producer();
	~Producer();
public:
	std::shared_ptr<GameShape> getGameShape(int);
	int gameShape();
};
#endif//__PRODUCER__H
