#include <iostream>
#include <memory>

class Chulsoo
{
private:
	int age;
public:
	Chulsoo(int age) : age(age)
	{
		std::cout << "Chulsoo::Chulsoo(age) 생성자" << std::endl;
	}
	Chulsoo()
	{
		std::cout << "Chulsoo::Chulsoo() 생성자" << std::endl;
	}
	~Chulsoo()
	{
		std::cout << "Chulsoo::~Chulsoo() 소멸자 완료" << std::endl;
	}
	void introduce();
};

int main()
{
	Chulsoo* chulsooPtr2 = new Chulsoo(32);
	chulsooPtr2->introduce();
	delete chulsooPtr2;

	std::auto_ptr<Chulsoo> chulsooSmptr(new Chulsoo(32));
	chulsooSmptr->introduce();
	//delete chulsooSmptr;
	return 0;
}

void Chulsoo::introduce()
{
	std::cout << "철수나이:" << age << std::endl;
}