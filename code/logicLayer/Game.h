#ifndef __GAME__H
#define __GAME__H
#include "../tools/Singleton.h"
#include <memory>
#include <QObject>

class QTimer;

class Game : public Singleton<Game>
{
	Q_OBJECT;
public:
	Game();
	~Game();
public:
	void run();
	void stop();
private:
	std::unique_ptr<QTimer> timer_;
public slots:
	void onTimeout();

};
#endif//__GAME__H
