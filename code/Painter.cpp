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
			//s += QString("%1:").arg(shape->shape()[i][j]);
			qDebug() << count << ":" << shape->shape()[i][j];
			++count;
		}
		//s += "\n";
	}
	//qDebug() << s;
	qDebug() << "end";
}

void Painter::paintShape(QPainter& painter, const std::shared_ptr<GameShape>& gameShape)
{
	painter.setBrush(Qt::white);
	printShape(gameShape);
	for(size_t i = 0; i != 4; ++i)
		for(size_t j = 0; j != 4; ++j)
		{
			if (gameShape->shape()[i][j] == 1)
				painter.drawRect(i * 20, j * 20, 20, 20);
		}
}
