#include <iostream>

class Chulsoo 
{
private:
	int age;
public:
	Chulsoo(const Chulsoo& source) : age(source.age)
	{
		std::cout << "Chulsoo::chulsoo() ���� ������ �Ϸ�" << std::endl;
	}
	Chulsoo(int age) : age(age) 
	{
	std::cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << std::endl;
	}
	Chulsoo()
	{
		std::cout << "Chulsoo::Chulsoo() ������ �Ϸ� " << std::endl;
	}

	void introduce();

};

int main()
{
	Chulsoo chulsoo1(32);
	Chulsoo chulsoo2(50);
	Chulsoo chulsoo3(100);
	chulsoo1.introduce();
	chulsoo2.introduce();
	chulsoo3.introduce();
}