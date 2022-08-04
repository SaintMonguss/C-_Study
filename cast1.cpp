#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


int main()
{
	int i = 3.65;
	long l = M_PI;
	float f = M_PI;
	double d = M_PI;

	std::cout << i << " " << l << " " << f << " " << d << std::endl;
	
	return 0;
}