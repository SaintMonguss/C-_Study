#include <iostream>

int main()
{
	int a, b;
	int result;

	std::cout << "a/b �� �����մϴ�. a,b�� �Է��ϼ���" << std::endl;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	try {
		if (b == 0)
			throw b;
		std::cout << "�������� ��: " << a / b << std::endl;
		std::cout << "�������� ������: " << a % b << std::endl;
	}
	catch (int expn)
	{
		std::cout << "������ " << expn << "�� �� �� �����ϴ�." << std::endl;
		std::cout << "���α׷��� �ٽ� �����ϼ���" << std::endl;
	}
	std::cout << "end of main" << std::endl;
	
	return 0;
}
