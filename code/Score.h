#ifndef __SCORE__H
#define __SCORE__H

#include <QWidget>

class Score : public QWidget
{
public:
	explicit Score(QWidget* parent = 0);
	~Score();
private:
	void initialize();
};
#endif//__SCORE__H
