#include <iostream>

class Chulsoo 
{
private:
	int age;
public:
	Chulsoo(const Chulsoo& source) : age(source.age)
	{
		std::cout << "Chulsoo::chulsoo() 복사 생성자 완료" << std::endl;
	}
	Chulsoo(int age) : age(age) 
	{
	std::cout << "Chulsoo::Chulsoo(age) 생성자 완료" << std::endl;
	}
	Chulsoo()
	{
		std::cout << "Chulsoo::Chulsoo() 생성자 완료 " << std::endl;
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