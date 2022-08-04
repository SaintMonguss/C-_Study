#include <iostream>

namespace swaper 
{
	void swapA (int* ptr_a, int* ptr_b);
	void swapB (int& a, int& b);
}

int main()
{
	int a = 20;
	int b = 40;
	int* ptr_a = &a;
	int* ptr_b = &b;
	swaper::swapA(ptr_a, ptr_b);
	std::cout << a <<" " << b << std::endl;
	swaper::swapB(a, b);
	std::cout << a << " " << b << std::endl;

	return 0;
}

void swaper::swapA(int* ptr_a, int* ptr_b)
{
	int tmp = 0;
	tmp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = tmp;
}

void swaper::swapB(int& a, int& b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}
