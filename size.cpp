#include <iostream>

int main()
{
	char c, * pc;
	int i, * pi;
	float f, * pf;
	double d, * pd;
	std::cout << "char : " << sizeof(c) << "/" << sizeof(pc) << std::endl;
	std::cout << "int : " << sizeof(i) << "/" << sizeof(pi) << std::endl;
	std::cout << "float : " << sizeof(f) << "/" << sizeof(pf) << std::endl;
	std::cout << "double : " << sizeof(d) << "/" << sizeof(pd) << std::endl;
	std::cout << sizeof(double*) << std::endl;
	return 0;
}