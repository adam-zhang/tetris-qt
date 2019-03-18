#ifndef __GAME__H
#define __GAME__H
#include "../tools/Singleton.h"
#include "../tools/Properties.h"
#include <QObject>
#include <array>

class QTimer;

class Game : public QObject
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
	enum
	{
		COLUMN = 50,
		ROW = 30
	};
private:
	int getShape();
	void cleanGrid();
public:
	std::array<std::array<int, COLUMN>, ROW> grid_;
signals:
	void gridChanged();
	void candidateChanged();

};
#endif//__GAME__H
