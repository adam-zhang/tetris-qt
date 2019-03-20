#include "GameShape.h"

GameShape::GameShape()
	: x_(0)
	  , y_(0)
{
	for(size_t i = 0; i != 4; ++i)
		for(size_t j = 0; j != 4; ++j)
			shape()[i][j] = 0;
}

GameShape::~GameShape()
{
}
