#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map <std::string, int > m;
	m.insert(std::make_pair("A", 10));
	m.insert(std::make_pair("B", 20));
	m.insert(std::make_pair("C", 30));
	m.insert(std::make_pair("D", 40));
	m.insert(std::make_pair("E", 50));
	m["F"] = 100;

	for (auto i = m.begin(); i != m.end(); i++)
		std::cout << "[" << i->first << " " << i->second << "]";
		std::cout << std::endl;
		auto i = m.find("A");
		std::cout << i->first << " : " << i->second << std::endl;
		m.insert(std::make_pair("E", 150));

		return 0;

}
