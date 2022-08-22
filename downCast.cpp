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
		std::cout << "person ::persn(name,age) 생성자 완료" << std::endl;
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
	~Person()
	{
		std::cout << "person::~person() 소멸자 완료" << std::endl;
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
		std::cout << "Chulsoo::chulsoo() 생성자 완료" << std::endl;
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
	~Chulsoo()
	{
		std::cout << "Chulsoo::~chulsoo() 소멸자 완료" << std::endl;
	}
};

int main(void)
{
	//std::cout << "==================(Chulsoo -> Person) 업캐스팅 (참조)==================" << std::endl;
	//Chulsoo chulsooUpRef = Chulsoo("철수", 32, 3);
	//Person& personUpRef = chulsooUpRef;
	//personUpRef.introduce();
	//std::cout << "==================(Chulsoo -> person) 업캐스팅 (포인터)================" << std::endl;
	//Person* personUpPtr = new Chulsoo("철수", 32, 3);
	//personUpPtr->introduce();

	//std::cout << "==================(Chulsoo -> Person) 업캐스팅==================" << std::endl;
	//Chulsoo chulsooUp = Chulsoo("철수", 32, 3);
	//Person personUp = chulsooUp;
	//personUp.introduce();

	Person person("사람", 100);
	person.introduce();

	Chulsoo chulsoo("김철수", 32, 3);
	chulsoo.introduce();

	return 0;
}