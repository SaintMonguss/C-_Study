#include <iostream>

class Monguss {
public :
	void Eat();
};

void Monguss::Eat()
{
	std::cout << "¸ù±¸½º ¶Ç ¸Ô´Â´Ù!" << std::endl;
}

int main()
{
	Monguss monguss;
	monguss.Eat();
	return 0;
}