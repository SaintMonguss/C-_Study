#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int* data = new int[num];
	for (int i = 0; i < num; i++)
		std::cin >> data[i];
	delete[] data;
}