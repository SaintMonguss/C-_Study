#include <iostream>
#include <fstream>

//int main()
//{
//	std::ofstream output;
//	output.open("test.txt");
//	output << "��ſ� ���α׷���!!!" << std::endl;
//	output.close();
//	return 0;
//
//}

int main()
{
	std::ifstream input;
	char message[80];
	input.open("test.txt");
	input >> message;
	std:: cout << message << std::endl;
	input.close();
	return 0;

}