#include <iostream>

typedef struct CalNum {
	float num1;
	float num2;
	float result;
	char action;
}CalNum;

void Input(CalNum * calNum)
{
	std::cout << "==================================" << std::endl;
	std::cout << "����� ������ �Է��� �ּ���" << std::endl;
	scanf("%f %c %f %*c", &calNum->num1, &calNum->action, &calNum->num2);
	if ((calNum->action == '/') && (calNum->num2 == 0))
	{
		std::cout << "0���� ���� �� �����ϴ�. �߸��� �Է��Դϴ�" << std::endl;
		calNum->action = NULL;
		calNum->num1, calNum->num2 = 0;
		Input(calNum);
	}
};

void Add(CalNum* calNum)
{
	calNum->result = calNum->num1 + calNum->num2;
};

void Sub(CalNum* calNum)
{
	calNum->result = calNum->num1 - calNum->num2;
};

void Multiple(CalNum* calNum)
{
	calNum->result = calNum->num1 * calNum->num2;
};

void Divide(CalNum* calNum)
{
	calNum->result = calNum->num1 / calNum->num2;
};

int main()
{
	CalNum mongussNum;
	Input(&mongussNum);
	switch (mongussNum.action)
	{
	case '+':
		Add(&mongussNum);
		printf("%.2f %c %.2f = %.2f\n", mongussNum.num1, mongussNum.action, mongussNum.num2, mongussNum.result);
		break;
	case '-':
		Sub(&mongussNum);
		printf("%.2f %c %.2f = %.2f\n", mongussNum.num1, mongussNum.action, mongussNum.num2, mongussNum.result);
		break;
	case '*':
		Multiple(&mongussNum);
		printf("%.2f %c %.2f = %.2f\n", mongussNum.num1, mongussNum.action, mongussNum.num2, mongussNum.result);
		break;
	case '/':
		Divide(&mongussNum);
		printf("%.2f %c %.2f = %.2f\n", mongussNum.num1, mongussNum.action, mongussNum.num2, mongussNum.result);
		break;
	}
	return 0;
}
