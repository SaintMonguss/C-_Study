#include <memory>
#include <iostream>

int main()
{
	std::shared_ptr<int> sp1(new int(5));
	std::weak_ptr<int>wp1 = sp1;
	{
		std::shared_ptr<int> sp2 = wp1.lock();
		if (sp2)
		{
		}
	}
	sp1.reset();
	std::shared_ptr<int> sp3 = wp1.lock();

	return 0;
}