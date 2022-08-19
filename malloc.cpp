#include <iostream>


int main()
{
	int size;
	std::cout << "정수 개수: ";
	std::cin >> size;

	int* arr = new int[size];

	std::cout << "정수를 입력하시오\n";
	for (int i = 0; i < size; i++)
		std::cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	float ave = (float)sum / (float)size;
	std::cout << "합 =" << sum << ",평균 = " << ave << "\n";

	delete[]arr;

	return 0;
}
