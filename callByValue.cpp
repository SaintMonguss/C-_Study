#include <iostream>

class Restaurant {
public:
	int Steak= 15000;
};

class Chulsoo
{
public :
	int Eat(int);
};

int Chulsoo::Eat(int steakNum)
{
	steakNum = 70000;
	std::cout << "ö���� �Դ´�" << std::endl;
	return steakNum;
}

int main()
{
	Chulsoo chulsoo;
	Restaurant vips;

	vips.Steak = 30000;
	std::cout << "ö����" << chulsoo.Eat(vips.Steak) << "�� ¥�� ������ũ�� �Ծ��ٰ� �������� �ߴ�" << std::endl;
	std::cout << "��������� ö����" << vips.Steak << "�� ¥�� ������ũ�� �������� �˰� �ִ�" << std::endl;

	return 0;
}