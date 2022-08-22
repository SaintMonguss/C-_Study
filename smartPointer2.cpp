#include <iostream>
#include <memory>

class Chulsoo
{
private:
	int age;
public:
	Chulsoo(int age) : age(age)
	{
		std::cout << "Chulsoo::Chulsoo(age) ������" << std::endl;
	}
	Chulsoo()
	{
		std::cout << "Chulsoo::Chulsoo() ������" << std::endl;
	}
	~Chulsoo()
	{
		std::cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << std::endl;
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
	std::cout << "ö������:" << age << std::endl;
}