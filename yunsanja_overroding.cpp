#include <iostream>

class Chulsoo {
	int age;
public:
	Chulsoo(int age) : age(age) {
		std::cout << "Chulsoo::Chulsoo(age) 생성자 완료" << std::endl;
	}
	void introduce()
	{
		std::cout << "철수의 나이는 " << age << "세 입니다" << std::endl;
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