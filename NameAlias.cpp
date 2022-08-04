#include <iostream>

using namespace std;

namespace AAA 
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}
namespace ABC = AAA::BBB::CCC;

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	ABC::num2 = 30;

	std::cout << ABC::num1 << std::endl;
	std::cout << ABC::num2 << std::endl;

	return 0;
}