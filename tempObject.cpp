#include <iostream>

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		std::cout << "Numbaer (" << n << ")" << std::endl;
	}
	Number& operator = (const Number& ref)
	{
		std::cout << "operator = ()" << std::endl;
		num = ref.num;
		return *this;
	}

	void printNumber()
	{
		std::cout << num << std::endl;
	}
};

int main()
{
	Number num1(3.14);
	num1 = 30;
	num1.printNumber();

	return 0;
}