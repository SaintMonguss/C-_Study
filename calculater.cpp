#include <iostream>


class Calculater
{
private : 
	float num1;
	float num2;
	char action ;
public: 
	Calculater()
	{
		num1 = 0;
		num2 = 0;
		action = NULL;
	};
	void Input()
	{
		std::cout << "==================================" << std::endl;
		std::cout << "계산할 수식을 입력해 주세요" << std::endl;
		scanf("%f %c %f %*c", &num1, &action, &num2);
		if ((this->action == '/') && (this->num2 == 0))
		{
			std::cout << "0으로 나눌 순 없습니다. 잘못된 입력입니다" << std::endl;
			action = NULL;
			num1, num2 = 0;
			Input();
		}
	};

	void showResult()
	{
		switch (this->action)
		{
		case '+':
			printf("%.2f %c %.2f = %.2f\n", GetNum1(), GetAction(), GetNum2(), Add());
			break;
		case '-':
			printf("%.2f %c %.2f = %.2f\n", GetNum1(), GetAction(), GetNum2(), Sub());
			break;
		case '*':
			printf("%.2f %c %.2f = %.2f\n", GetNum1(), GetAction(), GetNum2(), Multiple());
			break;
		case '/':
			printf("%.2f %c %.2f = %.2f\n", GetNum1(), GetAction(), GetNum2(), Divide());
			break;
		}
	}

	float Add() const
	{
		return (this->num1) + (this->num2);
	};

	float Sub() const
	{
		return (this->num1) - (this->num2);
	};

	float Multiple() const
	{
		return (this->num1) * (this->num2);
	};

	float Divide() const
	{
		return (this->num1) / (this->num2);
	};

	float GetNum1() const
	{
		return this->num1;
	};

	void SetNum1(float num1)
	{
		this->num1 = num1;
	};
	
	float GetNum2() const
	{
		return this->num2;
	};

	void SetNum2(float num2)
	{
		this->num2 = num2;
	};
	
	char GetAction() const
	{
		return this->action;
	};

	void SetAction(char action)
	{
		this->action = action;
	};
};


int main()
{ 
	Calculater casio;
	casio.Input();
	casio.showResult();

	return 0;
}

