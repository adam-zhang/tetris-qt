#ifndef __GAMESHAPE__H
#define __GAMESHAPE__H
#include "../tools/Properties.h"
#include "../tools/tool.h"

class GameShape
{
public:
	GameShape();
	~GameShape();

	enum
	{
		TShape,
		SShape,
		ZShape,
		JShape,
		LShape,
		IShape,
		OShape,
	};

	PROPERTY(int, width, setWidth);
	PROPERTY(int, height, setHeight );
	private:
		Shape shape_;
	public:
		Shape& shape()
		{ return  shape_;}
};
#endif//__GAMESHAPE__H
