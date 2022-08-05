#include <iostream>

int main()
{
	int i = 10;
	[=]() mutable { std::cout << "i :" << ++i << std::endl; } ();
	std::cout << [i](int x) -> int {return i + x; }(20) << std::endl;
	std::cout << ">> i : " << i << std::endl;
	return 0;
}