#include <iostream>
#include <queue>

int main()
{
	std::priority_queue<int> pq;
	std::priority_queue<int, std::vector<int>, std::greater<int>>pq2;
	std::priority_queue<int, std::deque<int>, std::greater<int>>pq3;

	pq.push(10);
	pq.push(20);
	pq.push(30);
	pq.push(40);
	pq.push(40);
	pq.push(10);
	pq.push(20);

	while (!pq.empty())
	{
		std::cout << pq.top() << " ";
		pq2.push(pq.top());
		pq.pop();
	}

	std::cout << std::endl;
	while (!pq2.empty())
	{
		std::cout << pq2.top() << " ";
		pq3.push(pq2.top());
		pq2.pop();
	}
	std::cout << std::endl;
	while (!pq3.empty())
	{
		std::cout << pq3.top() << " ";
		pq3.pop();
	}
	std::cout << std::endl;

	return 0;
}