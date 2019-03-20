#ifndef __TOOLS__H
#define __TOOLS__H
#include <array>


enum
{
	COLUMN = 25,
	ROW = 10
};

typedef std::array<std::array<int, 4>, 4> Shape;
typedef std::array<std::array<int, COLUMN>, ROW> BoxMap;

#endif//__TOOLS__H
