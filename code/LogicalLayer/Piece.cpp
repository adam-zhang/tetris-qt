#include "Piece.h"
#include <cassert>

using namespace std;

Piece::Piece()
{
}

Piece::~Piece()
{
}

//shared_ptr<GameShape> Piece::getShape(int& shape)
//{
//	switch(shape)
//	{
//		case IShape: return makeIShape();  
//		case SShape: return makeSShape(); 
//		case ZShape: return makeZShape(); 
//		case JShape: return makeJShape(); 
//		case LShape: return makeLShape(); 
//		case OShape: return makeOShape(); 
//	}
//	assert(false);
//	return make_shared<GameShape>();
//}

//shared_ptr<GameShape> Piece::makeIShape()
//{
//	auto p = make_shared<GameShape>();
//	p->shape()[0][0] = 1;
//	p->shape()[0][1] = 1;
//	p->shape()[0][2] = 1;
//	p->shape()[0][3] = 1;
//	p->setWidth(1);
//	p->setHeight(4);
//	return p;
//}
//
//shared_ptr<GameShape> Piece::makeSShape()
//{
//	auto p = make_shared<GameShape>();
//	p->setWidth(3);
//	p->setHeight(2);
//	p->shape()[0][1] = 1;
//	p->shape()[0][3] = 1;
//	p->shape()[1][0] = 1;
//	p->shape()[1][1] = 1;
//	return p;
//}
//
//shared_ptr<GameShape> Piece::makeTShape()
//{
//	auto p = make_shared<GameShape>();
//	p->setWidth(3);
//	p->setHeight(2);
//	p->shape()[0][0] = 1;
//	p->shape()[0][1] = 1;
//	p->shape()[0][2] = 1;
//	p->shape()[1][1] = 1;
//	return p;
//}
//
//shared_ptr<GameShape> Piece::makeZShape()
//{
//	auto p = make_shared<GameShape>();
//	p->setWidth(3);
//	p->setHeight(2);
//	p->shape()[0][0] = 1;
//	p->shape()[0][1] = 1;
//	p->shape()[1][1] = 1;
//	p->shape()[1][2] = 1;
//	return p;
//}
//
//shared_ptr<GameShape> Piece::makeJShape()
//{
//	auto p = make_shared<GameShape>();
//	p->setWidth(2);
//	p->setHeight(3);
//	p->shape()[0][1] = 1;
//	p->shape()[1][1] = 1;
//	p->shape()[2][0] = 1;
//	p->shape()[2][1] = 1;
//	return p;
//}
//
//shared_ptr<GameShape> Piece::makeLShape()
//{
//	auto p = make_shared<GameShape>();
//	p->setWidth(2);
//	p->setHeight(3);
//	p->shape()[0][0] = 1;
//	p->shape()[1][0] = 1;
//	p->shape()[2][0] = 1;
//	p->shape()[2][1] = 1;
//	return 0;
//}
//
//shared_ptr<GameShape> Piece::makeOShape()
//{
//	auto p = make_shared<GameShape>();
//	p->setWidth(2);
//	p->setHeight(2);
//	p->shape()[0][0] = 1;
//	p->shape()[0][1] = 1;
//	p->shape()[1][0] = 1;
//	p->shape()[1][1] = 1;
//	return 0;
//}
//
//
