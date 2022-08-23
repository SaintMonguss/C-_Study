#include <iostream>

//class First
//{
//public:
//#if 0
//	virtual void print() = 0;
//#else
//	virtual void print()
//	{
//		std::cout << "First" << std::endl;
//	}
//#endif
//};
//
//class Second : public First
//{
//public:
//	void print()
//	{
//		std::cout << "second" << std::endl;
//	}
//};
//
//class Third : public Second
//{
//public :
//	void print() override
//	{
//		std::cout << "Third" << std::endl;
//	}
//};
//
//int main()
//{
//#if 1
//	Third third = Third();
//	Second second = third;
//	First first = third;
//
//	third.print();
//	second.print();
//	first.print();
//#else
//	Third* third = new Third();
//	Second* second = third;
//	Forst* first = third;
//	ccc->printf();
//	third->print();
//	first->printf();
//
//#endif
//
//	return 0;
//}

class First
{
public:
	void  FirstFunc()
	{
		std::cout << "FirstFunc()" << std::endl;
	}
	virtual void simpleFunc() { std::cout << "First's SimpleFunc()" << std::endl; }
};

class Second : public First
{

};