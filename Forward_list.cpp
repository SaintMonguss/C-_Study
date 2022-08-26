#include <iostream>
#include <forward_list>

int main()
{
	std::forward_list<int> fl;
	std::forward_list<int> fl2 = { 1, 2, 3, 4 };

	fl.push_front(10);
	fl.push_front(20);
	fl.push_front(30);
	fl.push_front(40);

	for (auto i = fl.begin(); i != fl.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	for (auto i = fl2.begin(); i != fl2.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	for (auto i = fl.begin(); i != fl.end(); i++)
	{
		if (*i == 30)
		{
			fl.splice_after(i, fl2);
			break;
		}
	}
	for (auto i = fl.begin(); i != fl.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	std::forward_list<int> fl3 = { 100, 200, 300, 400 };
	auto p = fl.before_begin();
	fl.splice_after(p, fl3);

	for (auto i = fl.begin(); i != fl.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	return 0;
}