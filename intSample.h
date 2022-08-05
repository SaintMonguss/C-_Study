#ifndef __INTSAMPLE_H__
#define __INTSAMPLE_H__

#include <iostream>

class intSample
{
public :
	void showScore();
	void setScore(const int s);
	int getScore();

private:
	int score;
};
#endif