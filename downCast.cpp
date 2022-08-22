#include <iostream>

#define NAME_LEN 20

class Person
{
protected:
	char name[NAME_LEN];
	int age;
public:
	Person(const char* name, int age) 
	{
		strcpy_s(this->name, NAME_LEN, name);
		this->age = age;
		std::cout << "person ::persn(name,age) ������ �Ϸ�" << std::endl;
	}
	void introduce()
	{
		std::cout << "Person�� �̸� : " << name << std::endl;
		std::cout << "Person�� ���� : " << age << std::endl;
	}
	void eat()
	{
		std::cout << "person�� �Դ´�" << std::endl;
	}
	void sleep()
	{
		std::cout << "Person�� �ܴ�" << std::endl;
	}
	~Person()
	{
		std::cout << "person::~person() �Ҹ��� �Ϸ�" << std::endl;
	}
};

class Chulsoo : public Person
{
private :
	int numOfBooks;
public:
	Chulsoo(const char* name, int age, int numOfBooks) : Person( name, age)
	{
		this->numOfBooks = numOfBooks;
		std::cout << "Chulsoo::chulsoo() ������ �Ϸ�" << std::endl;
	}
	void write()
	{
		std::cout << "ö���� å�� ���٤�" << std::endl;
	}
	void introduce() const
	{
		std::cout << "ö���� �̸� : " << name << std::endl;
		std::cout << "ö���� ���� : " << age << std::endl;
		std::cout << "ö���� �� å�� �� : " << numOfBooks << std::endl;
	}
	void setAge(int age)
	{
		this -> age = age;
	}
	~Chulsoo()
	{
		std::cout << "Chulsoo::~chulsoo() �Ҹ��� �Ϸ�" << std::endl;
	}
};

int main(void)
{
	//std::cout << "==================(Chulsoo -> Person) ��ĳ���� (����)==================" << std::endl;
	//Chulsoo chulsooUpRef = Chulsoo("ö��", 32, 3);
	//Person& personUpRef = chulsooUpRef;
	//personUpRef.introduce();
	//std::cout << "==================(Chulsoo -> person) ��ĳ���� (������)================" << std::endl;
	//Person* personUpPtr = new Chulsoo("ö��", 32, 3);
	//personUpPtr->introduce();

	//std::cout << "==================(Chulsoo -> Person) ��ĳ����==================" << std::endl;
	//Chulsoo chulsooUp = Chulsoo("ö��", 32, 3);
	//Person personUp = chulsooUp;
	//personUp.introduce();

	Person person("���", 100);
	person.introduce();

	Chulsoo chulsoo("��ö��", 32, 3);
	chulsoo.introduce();

	return 0;
}