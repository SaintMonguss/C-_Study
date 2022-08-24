#include <iostream>
#include <string.h>




template <typename T>
T const add(T const& a, T const& b)
{
	std::cout << "typename T" << std::endl;
	return a + b;
}

template<>
char* const add<char*>(char* const& a, char* const& b)
{
	std::cout << "specialized" << std::endl;
	return strcat(a, b);
}

int main()
{
	int i = 5;
	int j = 10;
	double a = 5.1;
	double b = 10.2;

	char m[20] = "Hello";
	char n[20] = "World";

	std::cout << i << " + " << j << " = " << add(i, j) << std::endl;
	std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
	std::cout << add<char*>(m, n) << std::endl;
	return 0;
}






//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	std::cout << Max(11, 15) << std::endl;
//	std::cout << Max('T', 'Q') << std::endl;
//	std::cout << Max(3.5, 7.5) << std::endl;
//	std::cout << Max("simple", "Best") << std::endl;
//	return 0;
//}