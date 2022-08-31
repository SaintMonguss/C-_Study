#include <iostream>

void inputName(char* name)
{
	std::cout << "이름을 입력하세요: ";
	std::cin >> name;
	if (strlen(name) <= 2)
		throw name;
}


int inputAge()
{
	int age;
	std::cout << "나이 : ";
	std::cin >> age;
	if (age < 1)
		throw age;
	return age;
}


int main()
{
	char name[512];
	int age;
	try {
		inputName(name);
		age = inputAge();

		std::cout << "저의 이름은 " << name << "입니다." << std::endl;
	}

	catch (char* e)
	{
		std::cout << "예외 발생. 잘못된 이름 입력: " << e << '\n';
	}
	catch (int e)
	{
		std::cout << "예외 발생. 잘못된 나이 입력: " << e << '\n';
	}

	return 0;
}