#ifndef __GAME__H
#define __GAME__H
#include "../tools/Singleton.h"
#include "../tools/Properties.h"
//#include <QObject>

//class QTimer;

class Game : public Singleton<Game>
{
	//Q_OBJECT;
public:
	Game();
	~Game();
public:
	void run();
	void stop();
private:
	//QTimer* timer_;
//public slots:
	//void onTimeout();
public:
	void update();
	void rotate();
	void speed();
	void moveLeft();
	void moveRight();
	void moveOn();

	PROPERTY(int, candidate, setCandidate);
	PROPERTY(int, current, setCurrent);
private:
	int getShape();

};
#endif//__GAME__H
