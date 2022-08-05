#include <iostream>

class Restaurant {
public:
	int Steak= 15000;
};

class Chulsoo
{
public :
	void Eat(int);
	inline void EatInline(int SteakWeight);
};

void Chulsoo::Eat(int SteakWdight)
{
	std::cout << "Eat() :: 철수는 " << SteakWdight << "g 짜리 스테이크를 먹는다" << std::endl;
}

void Chulsoo::EatInline(int SteakWdight)
{
	std::cout << "EatInline() :: 철수는 " << SteakWdight << "g 짜리 스테이크를 먹는다" << std::endl;
}

int main()
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.EatInline(500);
	return 0;
}