#include <iostream>
#include <string>

class Person
{
private : 
	char* name;
	int age;
public :
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowpersonInfo() const
	{
		std::cout <<  "ÀÌ¸§ : " << name << std::endl;
		std::cout << "³ªÀÌ : " << age << std::endl;
	}

	~Person()
	{
		delete[] name;
		std::cout << "¼Ò¸êÀÚ ºÒ·¶¾î" << std::endl;
	}
};

void main()
{
	Person aa = Person("monguss", 29);
	aa.ShowpersonInfo();

	return;
}