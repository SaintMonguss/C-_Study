#include <memory>

int main()
{
	std::unique_ptr<int> ptr01(new int(5));

	auto ptr02 = move(ptr01);
	//���� ������ ��� �Ұ� move()�� ����� ��
	//std::unique_ptr<int> ptr03 = ptr01;

	ptr02.reset();
	ptr01.reset();
}