#include "GeometricComp.h"

void DIsplayGeometricObject(GeometricObject& object)
{
	std::cout << "line1 : " << object.GetLine1() << std::endl;
	std::cout << "line2 : " << object.GetLine2() << std::endl;


	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*> (p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != nullptr)
	{
		p1->AreaCalculation();
		p1->RoundCalculation();
		std::cout << "�̵ �ﰢ���� ���� : " << p1->GetArea() << std::endl;
		std::cout << "�̵ �ﰢ���� � : " << p1->GetRound() << std::endl;

	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->RoundCalculation();
		std::cout << "�簢���� ���� : " << p2->GetArea() << std::endl;
		std::cout << "�簢���� �ѷ� : " << p2->GetRound() << std::endl;
	}
}

int main()
{
	Isosceles p1(9, 15);
	Rectangle p2(10, 12);

	DIsplayGeometricObject(p1);
	std::cout << "*********************************************" << std::endl;
	DIsplayGeometricObject(p2);

	return 0;
}
