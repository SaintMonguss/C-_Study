#include "IntSample.h"


void intSample::showScore()
{
	std::cout << "����: " << score << std::endl;
}

void intSample::setScore(const int s)
{
	score = s;
}

int intSample::getScore()
{
	return score;
}

