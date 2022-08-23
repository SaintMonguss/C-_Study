#include <iostream>

class First
{
public:
	void myFunc()
	{
		std::cout << "First Func" << std::endl;
	}
};

class Second : public First
{
public :
	void myFunc()
	{
		std::cout << "Second Func" << std::endl;
	}
};

class Third : public Second
{
public:
	void myFunc()
	{
		std::cout << "Third Func" << std::endl;
	}
};

int main()
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->myFunc();
	sptr->myFunc();
	tptr->myFunc();
	delete tptr;
	return 0;
}
