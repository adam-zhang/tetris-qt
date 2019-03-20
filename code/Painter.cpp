#include "Painter.h"
#include "LogicalLayer/GameShape.h"
#include <QPainter>
#include <QDebug>

using namespace std;

Painter::Painter()
{
}

Painter::~Painter()
{
}


static void printShape(const shared_ptr<GameShape>& shape)
{
	qDebug() << "begin";
	int count = 0;
	QString s;
	for(size_t i = 0; i != 4; ++i)
	{
		for(size_t j = 0; j != 4; ++j)
		{
			qDebug() << count << ":" << shape->shape()[i][j];
			++count;
		}
	}
	qDebug() << "end";
}


void Painter::paintShape(QPainter& painter, const std::shared_ptr<GameShape>& gameShape)
{
	painter.setBrush(Qt::white);
	for(size_t i = 0; i != 4; ++i)
		for(size_t j = 0; j != 4; ++j)
		{
			if (gameShape->shape()[i][j] == 1)
				painter.drawRect(i * 20 + gameShape->x(), j * 20 + gameShape->y(), 20, 20);
		}
}

void Painter::paintGrid(QPainter& painter, const BoxMap& box)
{
	painter.setBrush(Qt::white);
	for(size_t i = 0; i != ROW; ++i)
		for(size_t j = 0; j != COLUMN; ++j)
		{
			if (box[i][j] == 1)
				painter.drawRect(i*20, j*20, 20, 20);
		}
}
