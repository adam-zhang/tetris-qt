#ifndef __SCORE__H
#define __SCORE__H

#include <QWidget>

class QLabel;

class Score : public QWidget
{
public:
	explicit Score(QWidget* parent = 0);
	~Score();
private:
	void initialize();
private:
	QLabel* label_;
private:
	void setScore(int);
};
#endif//__SCORE__H
