#include <iostream>

void print(int& x)
{
	std::cout << "printf (int &x)";
}

void print(const int& x)
{
	std::cout << "printf(const int &x)" << std::endl;
}

void  print(int&& x)
{
	std::cout << "printf(int &&x)" << std::endl;
}

int main()
{
	const int &x = 5;
	print(x);
	print(3);
}