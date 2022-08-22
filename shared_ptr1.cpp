#include <memory>
#include <iostream>

int main()
{
	std::shared_ptr<int> ptr01(new int(5));
	std::cout << ptr01.use_count() << std::endl;
	auto ptr02(ptr01);
	std::cout << ptr01.use_count() << std::endl;
	auto ptr03 = ptr01;
	std::cout << ptr01.use_count() << std::endl;
}