#include <iostream>
#include <list>

int main()
{
	std::list<int> intList;
	for (int i = 0; i < 10; i++)
		intList.push_back(i);

	intList.remove(5);

	std::list<int> ::iterator it;

	for (it = intList.begin(); it != intList.end(); it++)
		std::cout << *it << std::endl; 

	return 0;
};