#include "GameShape.h"

GameShape::GameShape()
{
	for(size_t i = 0; i != 4; ++i)
		for(size_t j = 0; j != 4; ++j)
			shape()[i][j] = 0;
}

GameShape::~GameShape()
{
}
