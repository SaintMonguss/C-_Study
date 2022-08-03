#include <iostream>

int main()
{
	int value = 100;
	int &ref = value;

	std::cout << value << std::endl;
	std::cout << ref << std::endl;
	ref = 100000;
	std::cout << value << std::endl;
	std::cout << ref << std::endl;
	std::cout << &value << std::endl;
	std::cout << &ref << std::endl;
	

	return 0;
}