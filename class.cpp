#include <iostream>

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

struct Chulsoo
{
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	void introduce() {};
	void eat(const char* food) {};
	void sleep() {};
	void drive(const char* destination) {};
};



int main()
{
	Chulsoo chulsoo = { "철수", "남성", "작가", "diligent", 32 };
	chulsoo.drive("레스토랑");
	chulsoo.eat("스테이크");

	return 0;
	
}