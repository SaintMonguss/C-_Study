#include <iostream>

class SoSimple
{
private : 
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
	}

	SoSimple(SoSimple &copyObj) : num1(copyObj.num1), num2(copyObj.num2)
	{
		std::cout << "汗轿积己楼" << std::endl;
	}

	void ShowSImpleData()
	{
		std::cout << num1 << std::endl;
		std::cout << num2 << std::endl;

	}
};

int main()
{
	SoSimple sim1(15, 20);
	std::cout << "积己 傈" << std::endl;
	SoSimple sim2 = sim1;
	std::cout << "积己 饶" << std::endl;
	sim2.ShowSImpleData();
	return 0;
}