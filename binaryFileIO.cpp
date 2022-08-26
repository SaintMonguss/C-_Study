#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
	std::fstream fp;
	int data, score[5] = { 78, 96, 100, 25, 96 };

	fp.open("sample.txt", std::ios::out | std::ios::binary);
	fp.write((char*)score, 20);
	fp.close();

	fp.open("sample.txt", std::ios::in | std::ios::binary);
	if (fp.fail())
		return 1;

	fp.read((char*)&data, 4);
	std::cout << std::setw(3) << std::right << data << std::endl;

	fp.seekg(4, std::ios::cur);
	fp.read((char*)&data, 4);
	std::cout << std::setw(3) << std::right << data << std::endl;

	fp.close();

	return 0;d
}