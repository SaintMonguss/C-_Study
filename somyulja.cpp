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
		std::cout <<  "�̸� : " << name << std::endl;
		std::cout << "���� : " << age << std::endl;
	}

	~Person()
	{
		delete[] name;
		std::cout << "�Ҹ��� �ҷ���" << std::endl;
	}
};

void main()
{
	Person aa = Person("monguss", 29);
	aa.ShowpersonInfo();

	return;
}