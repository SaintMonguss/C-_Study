#include <iostream>


int main()
{
	int size;
	std::cout << "���� ����: ";
	std::cin >> size;

	int* arr = new int[size];

	std::cout << "������ �Է��Ͻÿ�\n";
	for (int i = 0; i < size; i++)
		std::cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	float ave = (float)sum / (float)size;
	std::cout << "�� =" << sum << ",��� = " << ave << "\n";

	delete[]arr;

	return 0;
}
