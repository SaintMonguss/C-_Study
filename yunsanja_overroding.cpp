#include <iostream>

class Chulsoo {
	int age;
public:
	Chulsoo(int age) : age(age) {
		std::cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << std::endl;
	}
	void introduce()
	{
		std::cout << "ö���� ���̴� " << age << "�� �Դϴ�" << std::endl;
	}
	Chulsoo add(const Chulsoo& ChulsooObj);
	Chulsoo sub(const Chulsoo& ChulsooObj);
	Chulsoo mul(const Chulsoo& ChulsooObj);
	Chulsoo div(const Chulsoo& ChulsooObj);
};

int main()
{
	Chulsoo chulsoo1(30);
	Chulsoo chulsoo2(15);
	chulsoo1.introduce();
	chulsoo2.introduce();

	Chulsoo
}