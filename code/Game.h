#ifndef __GAME__H
#define __GAME__H
#include "../tools/Singleton.h"
#include "../tools/Properties.h"
#include "../tools/tool.h"
#include <QObject>
#include <array>
#include <memory>

class QTimer;
class GameShape;

class Game : public QObject, public Singleton<Game>
{
	Q_OBJECT;
public:
	Game(QObject* parent = 0);
	~Game();
public:
	void start();
	void stop();
	void pause();
private:
	QTimer* timer_;
private slots:
	void onTimeout();
private:
public:
	const BoxMap& boxMap()const
	{ return grid_;}
	void update();
	void rotate();
	void speed();
	void moveLeft();
	void moveRight();
	void moveOn();
	int column()
	{ return COLUMN;}
	int row()
	{ return ROW;}

	PROPERTY(int, candidate, setCandidate);
	PROPERTY(int, current, setCurrent);
	PROPERTY(std::shared_ptr<GameShape>, currentShape, setCurrentShape);
private:
	void initializeShape();
	int getShape();
	void cleanGrid();
	void initialize();
public:
	BoxMap grid_;
signals:
	void gridChanged();
	void candidateChanged();

};
#endif//__GAME__H
