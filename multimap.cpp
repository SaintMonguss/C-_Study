#include <iostream>
#include <map>
#include <string>

int main()
{
	std::multimap <std::string, int > mm;
	mm.insert(std::make_pair("A", 10));
	mm.insert(std::make_pair("B", 20));
	mm.insert(std::make_pair("C", 30));
	mm.insert(std::make_pair("D", 40));
	mm.insert(std::make_pair("E", 50));
	mm.insert(std::make_pair("C", 100));
	mm.insert(std::make_pair("C", 200));

	for (auto i = mm.begin(); i != mm.end(); i++)
		std::cout << "[" << i->first << " " << i->second << "]";
	std::cout << std::endl;
	auto lo_bo = mm.lower_bound("C");
	auto up_bo = mm.upper_bound("C");

	std::cout << "key C의 value 들 :";
	for (auto i = lo_bo; i != up_bo; i++)
		std::cout << i->second << " ";

	std::cout << std::endl;

	auto eq_ra = mm.equal_range("C");
	std::cout << "(또다른 방법) key의 value 들";
	for (auto i = eq_ra.first; i != eq_ra.second; i++)
		std::cout << i->second << " ";

	std::cout << std::endl;



	return 0;

}
