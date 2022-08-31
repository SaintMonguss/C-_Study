#include <iostream>

int main()
{
	int a, b;
	int result;

	std::cout << "a/b 를 수행합니다. a,b를 입력하세요" << std::endl;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	try {
		if (b == 0)
			throw b;
		std::cout << "나눗셈의 몫: " << a / b << std::endl;
		std::cout << "나눗셈의 나머지: " << a % b << std::endl;
	}
	catch (int expn)
	{
		std::cout << "제수는 " << expn << "이 될 수 없습니다." << std::endl;
		std::cout << "프로그램을 다시 실행하세요" << std::endl;
	}
	std::cout << "end of main" << std::endl;
	
	return 0;
}
