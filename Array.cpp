#include <iostream>
#include <array>

int main()
{
	std::array<int, 10> ar;
	ar = { 1, 2, 3 };
	for (auto i = 0; i < ar.size(); i++)
		std::cout << ar.at(i) << " ";

	return 0;
}