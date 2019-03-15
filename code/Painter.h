#ifndef __PAINTER__H
#define __PAINTER__H

#include <memory>

class GameShape;
class QPainter;

class Painter
{
private:
	Painter();
	~Painter();
public:
	static void paintShape(QPainter&, const std::shared_ptr<GameShape>&);
};
#endif//__PAINTER__H
