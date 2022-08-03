#include <iostream>

int main()
{
	int value = 100;
	int* pointerValue = &value;

	std::cout << value << std::endl;
	std::cout << &value << std::endl;
	std::cout << pointerValue << std::endl;
	std::cout << *pointerValue << std::endl;
	std::cout << &pointerValue << std::endl;
	
	int** ppointerValue = &pointerValue;
	std::cout << **ppointerValue << std::endl;

	return 0;
}