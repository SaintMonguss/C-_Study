#include <iostream>

class Monguss {
public :
	void Eat();
};

void Monguss::Eat()
{
	std::cout << "������ �� �Դ´�!" << std::endl;
}

int main()
{
	Monguss monguss;
	monguss.Eat();
	return 0;
}