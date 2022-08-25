#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v(6, 1);
	std::cout << "v.capacity(): " << v.capacity() << " / v.size() : " << v.size() << std::endl;
	for (auto i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << std::endl;

	v.assign(4, 3);
	std::cout << "v.capacity(): " << v.capacity() << " / v.size() : " << v.size() << std::endl;
	for (auto i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << std::endl;

	v[2] = 7;
	for (std::vector<int>::iterator it = v.begin() + 3; it != v.end(); it++)
		*it = 9;
	v.push_back(10);
	v.push_back(20);
	std::cout << "v.capacity(): " << v.capacity() << " / v.size() : " << v.size() << std::endl;
	for (auto i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << std::endl;

	v.push_back(30);
		std::cout << "v.capacity(): " << v.capacity() << " / v.size() : " << v.size() << std::endl;
	for (auto i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << std::endl;

	v.resize(17);
	std::cout << "v.capacity(): " << v.capacity() << " / v.size() : " << v.size() << std::endl;
	for (auto i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << std::endl;

	return 0;

}