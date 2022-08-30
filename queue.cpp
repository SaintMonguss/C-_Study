#include <iostream>
#include <queue>

int main()
{
	std::queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	for (int i = 0; i < q.size(); ++i)
	{
		std::cout << q.front() << " ";
		q.pop();
	}
	std::cout << std::endl;
	return 0;
}