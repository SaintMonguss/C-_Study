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
	std::cout << "Eat() :: ö���� " << SteakWdight << "g ¥�� ������ũ�� �Դ´�" << std::endl;
}

void Chulsoo::EatInline(int SteakWdight)
{
	std::cout << "EatInline() :: ö���� " << SteakWdight << "g ¥�� ������ũ�� �Դ´�" << std::endl;
}

int main()
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.EatInline(500);
	return 0;
}