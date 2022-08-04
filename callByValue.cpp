#include <iostream>

class Restaurant {
public:
	int Steak= 15000;
};

class Chulsoo
{
public :
	int Eat(int);
};

int Chulsoo::Eat(int steakNum)
{
	steakNum = 70000;
	std::cout << "철수는 먹는다" << std::endl;
	return steakNum;
}

int main()
{
	Chulsoo chulsoo;
	Restaurant vips;

	vips.Steak = 30000;
	std::cout << "철수는" << chulsoo.Eat(vips.Steak) << "원 짜리 스테이크를 먹었다고 거짓말을 했다" << std::endl;
	std::cout << "레스토랑은 철수가" << vips.Steak << "원 짜리 스테이크를 먹은것을 알고 있다" << std::endl;

	return 0;
}