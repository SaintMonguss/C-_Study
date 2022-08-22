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
	}
	void introduce()
	{
		std::cout << "Person의 이름 : " << name << std::endl;
		std::cout << "Person의 나이 : " << age << std::endl;
	}
	void eat()
	{
		std::cout << "person은 먹는다" << std::endl;
	}
	void sleep()
	{
		std::cout << "Person은 잔다" << std::endl;
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
	}
	void write()
	{
		std::cout << "철수는 책을 쓴다ㅗ" << std::endl;
	}
	void introduce() const
	{
		std::cout << "철수의 이름 : " << name << std::endl;
		std::cout << "철수의 나이 : " << age << std::endl;
		std::cout << "철수가 쓴 책의 수 : " << numOfBooks << std::endl;
	}
	void setAge(int age)
	{
		this -> age = age;
	}
};

int main(void)
{
	std::cout << "==================(Chulsoo -> Person) 업캐스팅 (참조)==================" << std::endl;
	Chulsoo chulsooUpRef = Chulsoo("철수", 32, 3);
	Person& personUpRef = chulsooUpRef;
	personUpRef.introduce();
	std::cout << "==================(Chulsoo -> person) 업캐스팅 (포인터)================" << std::endl;
	Person* personUpPtr = new Chulsoo("철수", 32, 3);
	personUpPtr->introduce();

	std::cout << "==================(Chulsoo -> Person) 업캐스팅==================" << std::endl;
	Chulsoo chulsooUp = Chulsoo("철수", 32, 3);
	Person personUp = chulsooUp;
	personUp.introduce();

	return 0;
}