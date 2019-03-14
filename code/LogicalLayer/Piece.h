#ifndef __PIECE__H
#define __PIECE__H
#include "Properties.h"
#include <array>
#include <memory>

typedef std::array<std::array<int, 4>, 4> Shape;
typedef std::array<std::array<int, 30>, 45> BoxMap;

//class GameShape
//{
//};

class Piece
{
	public:
		Piece();
		~Piece();
	public:
		PROPERTY(int, score, setScore);
		PROPERTY(int, shape, setShape);
		PROPERTY(int, nextShape, setNextShape);
		PROPERTY(int, headX, setHeadX);
		PROPERTY(int, headY, setHeadY);
		PROPERTY(int, sizeH, setSizeH);
		PROPERTY(int, sizeW, setSizeW);
		PROPERTY(int, nextSizeH, setNextSizeH);
		PROPERTY(int, nextSizeW, setNextSizeW);
		PROPERTY(bool, gameOver, setGameOver);
		PROPERTY(Shape, boxShape, setBoxShape);
		PROPERTY(Shape, nextBoxShape, setNextBoxShape);
		PROPERTY(BoxMap, boxMap, setBoxMap);

	public:
		void initialize();
		std::shared_ptr<GameShape> getShape(int& shape);
		void scoreNext();
		void judge();
		void move();
		void rotate();
		bool isaggin();
		bool exspr();
	public:
	private:
		//std::shared_ptr<GameShape> makeIShape();
		//std::shared_ptr<GameShape> makeSShape();
		//std::shared_ptr<GameShape> makeZShape();
		//std::shared_ptr<GameShape> makeJShape();
		//std::shared_ptr<GameShape> makeLShape();
		//std::shared_ptr<GameShape> makeTShape();
		//std::shared_ptr<GameShape> makeOShape();
};
#endif//__PIECE__H
