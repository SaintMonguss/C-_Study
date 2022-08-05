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
		std::cout << "이름: " << name << std::endl;
		std::cout << "성별: " << sex << std::endl;
		std::cout << "직업: " << job << std::endl;
		std::cout << "성격: " << character << std::endl;
		std::cout << "나이: " << age << std::endl;
		std::cout << "결혼여부: " << (marriageStatus ? "YES" : "NO") << std::endl;
	}; // 자기소개
	void eat(const char* food)
	{
		std::cout << this->name <<"는" << food << "를 먹는다" << std::endl;
	};
	void sleep() 
	{
		std::cout << this->name << "는 잔다. 건들지 마라." << std::endl;
	};
	void drive(const char* destination) 
	{
		std::cout << this->name << "는 "<< destination << "으로 운전한다" << std::endl;
	};
	void write()
	{
		std::cout << this->name << "는 쓴다. 뭔가를!! " << std::endl;
	};
	void read()
	{
		std::cout << this->name << "는 책을 읽는다 " << std::endl;
	};
	void shopping()
	{
		std::cout << this->name << "는 탕진잼 중이다 " << std::endl;
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
	chulsoo.constructor("철수", "남성", "작가", "지적임", 32, true);
	younghee.constructor("영희", "여성", "주부", "강력함", 32, true);
	chulsoo.drive("레스토랑");
	chulsoo.eat("스테이크");
	younghee.eat("스테이크");
	chulsoo.drive("집");
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