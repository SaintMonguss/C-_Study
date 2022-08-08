#include <iostream>

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		std::cout << "My name is " << name << std::endl;
	}
	void HowOldAreYou() const
	{
		std::cout << "I'm iron man.....sry I'm " << age << " years old" << std::endl;
	}
};

class UnivStudent : public Person
{
private :
	char major[50];
public:
	UnivStudent(int myage, const char* myname, const char* mymajor) : Person(myage, myname)
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		std::cout << "My major is " << major << std::endl << std::endl;
	} 
};

int main()
{
	
	UnivStudent monguss = UnivStudent( 29, "몽구스", "컴퓨터");
	monguss.WhoAreYou();
	return 0;
}