#include <iostream>

void inputName(char* name)
{
	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;
	if (strlen(name) <= 2)
		throw name;
}


int inputAge()
{
	int age;
	std::cout << "���� : ";
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

		std::cout << "���� �̸��� " << name << "�Դϴ�." << std::endl;
	}

	catch (char* e)
	{
		std::cout << "���� �߻�. �߸��� �̸� �Է�: " << e << '\n';
	}
	catch (int e)
	{
		std::cout << "���� �߻�. �߸��� ���� �Է�: " << e << '\n';
	}

	return 0;
}