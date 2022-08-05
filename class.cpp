#include <iostream>

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

struct Human
{
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marriageStatus;
public:
	void introduce() 
	{
		std::cout << "�̸�: " << name << std::endl;
		std::cout << "����: " << sex << std::endl;
		std::cout << "����: " << job << std::endl;
		std::cout << "����: " << character << std::endl;
		std::cout << "����: " << age << std::endl;
		std::cout << "��ȥ����: " << (marriageStatus ? "YES" : "NO") << std::endl;
	}; // �ڱ�Ұ�
	void eat(const char* food)
	{
		std::cout << this->name <<"��" << food << "�� �Դ´�" << std::endl;
	};
	void sleep() 
	{
		std::cout << this->name << "�� �ܴ�. �ǵ��� ����." << std::endl;
	};
	void drive(const char* destination) 
	{
		std::cout << this->name << "�� "<< destination << "���� �����Ѵ�" << std::endl;
	};
	void write()
	{
		std::cout << this->name << "�� ����. ������!! " << std::endl;
	};
	void read()
	{
		std::cout << this->name << "�� å�� �д´� " << std::endl;
	};
	void shopping()
	{
		std::cout << this->name << "�� ������ ���̴� " << std::endl;
	};

	void constructor(const char* name, const char* sex, const char* job, const char* character, int age, bool marriaageStatus)
	{
		strcpy_s(this-> name, name);
		strcpy_s(this-> sex, sex);
		strcpy_s(this-> job, job);
		strcpy_s(this-> character, character);
		this->age = age;
		this->marriageStatus = marriageStatus;
		}
};



int main()
{
	Human chulsoo;
	Human younghee;
	chulsoo.constructor("ö��", "����", "�۰�", "������", 32, true);
	younghee.constructor("����", "����", "�ֺ�", "������", 32, true);
	chulsoo.drive("�������");
	chulsoo.eat("������ũ");
	younghee.eat("������ũ");
	chulsoo.drive("��");
	younghee.sleep();
	chulsoo.write();
	chulsoo.read();
	chulsoo.sleep();
	std::cout << std::endl;
	chulsoo.introduce();
	std::cout << std::endl;
	younghee.introduce();

	return 0;
	
}