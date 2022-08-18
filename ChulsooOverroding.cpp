#include <iostream>

class Chulsoo {
	int age;
public:
	Chulsoo(int age) : age(age) {
		std::cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << std::endl;
	}
	void introduce()
	{
		std::cout << "ö���� ���̴�" << age << "�� �Դϴ�" << std::endl;
	}
	friend Chulsoo operator+(const Chulsoo & chulsooObj1, const Chulsoo & chulsooObj2);
};

int main(void)
{
	Chulsoo chulsoo1(30);
	Chulsoo chulsoo2(15);
	chulsoo1.introduce();
	chulsoo2.introduce();
	Chulsoo chulsooAdd = 3 + chulsoo1;
	chulsooAdd.introduce();

	return 0;
}

Chulsoo operator+(const Chulsoo& chulsooObj1, const Chulsoo& chulsooObj2) {
	std::cout << "operator+()" << std::endl;
	Chulsoo chulsoo(chulsooObj1.age + chulsooObj2.age);
	return chulsoo;
}