#ifndef __PAINTER__H
#define __PAINTER__H

#include <memory>
#include "tools/tool.h"

class GameShape;
class QPainter;

class Painter
{
private:
	Painter();
	~Painter();
public:
	static void paintShape(QPainter&, const std::shared_ptr<GameShape>&);
	static void paintGrid(QPainter&, const BoxMap&);
};
#endif//__PAINTER__H
