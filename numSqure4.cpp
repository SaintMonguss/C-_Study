#include <iostream>

int n = 0;
int m = 0;

class Case 
{
public:
	int num = 0;
	Case(int num) : num(num) { }
	virtual void casePrint() {};
};

class Case1 : public Case 
{
public:
	int counter = 1;

	Case1(int num) : Case(num) {};

	void casePrint()
	{
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
			{
				std::cout << counter << " ";
			}
			std::cout << std::endl;
			counter++;
		}
	}
};

class Case2 : public Case
{
public:

	Case2(int num) : Case(num) {};

	void casePrint()
	{
		for (int i = 0; i < num; i++)
		{
			for (int j = 1; j <= num; j++)
			{
				if(i % 2 == 0 )
					std::cout << j << " ";
				else
					std::cout << num-j+1 << " ";
			}
			std::cout << std::endl;
		}
	}
};

class Case3 : public Case
{
public:
	int counter = 1;

	Case3(int num) : Case(num) {};

	void casePrint()
	{
		for (int i = 0; i < num; i++)
		{
			for (int j = 1; j <= num; j++)
			{
				std::cout << j * counter << " ";
			}
			std::cout << std::endl;
			counter++;
		}
	}
};

int main()
{
	std::cin >> n;
	std::cin >> m;
	Case* printer;
	switch (m)
	{
	case 1:
		printer = new Case1(n);
		printer->casePrint();
		break;
	case 2:
		printer = new Case2(n);
		printer->casePrint();
		break;
	case 3:
		printer = new Case3(n);
		printer->casePrint();
		break;
	default:
		break;
	}
	return 0;
}

