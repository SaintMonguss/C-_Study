#include <iostream>


class Calculater
{
private : 
	float num1=0;
	float num2=0;
	char action = NULL;
public: 
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
			this->Input();
		}
	};

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

	float Getnum1() const
	{
		return this->num1;
	};
	
	float Getnum2() const
	{
		return this->num2;
	};
	
	char GetAction() const
	{
		return this->action;
	};
};


int main()
{ 
	Calculater casio = Calculater();
	casio.Input();
	switch (casio.GetAction())
	{
	case '+':
		printf("%.2f %c %.2f = %.2f\n", casio.Getnum1(), casio.GetAction(), casio.Getnum2(), casio.Add());
		break;
	case '-':
		printf("%.2f %c %.2f = %.2f\n", casio.Getnum1(), casio.GetAction(), casio.Getnum2(), casio.Sub());
		break;
	case '*':
		printf("%.2f %c %.2f = %.2f\n", casio.Getnum1(), casio.GetAction(), casio.Getnum2(), casio.Multiple());
		break;
	case '/':
		printf("%.2f %c %.2f = %.2f\n", casio.Getnum1(), casio.GetAction(), casio.Getnum2(), casio.Divide());
		break;
	}

	return 0;
}
