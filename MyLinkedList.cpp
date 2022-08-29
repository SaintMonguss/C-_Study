#include <iostream>

struct NODE
{
	int data;
	NODE* next;


	static NODE* append(NODE* head, int data)
	{
		NODE* next = head;
		NODE* node;
		try
		{
			 node = new NODE;
		}
		catch(std::bad_alloc e)
		{
			std::cout << "노드 할당 실패" << std::endl;
			return nullptr;
		}
		if (head == nullptr)
		{
			node->data = data;
			node->next = nullptr;
			return node;
		}
		else
		{
			while (next->next != nullptr)
			{
				next = next->next;
			}
			next->next = node;
			node->data = data;
			node->next = nullptr;
			return node;
		}
	}

	static NODE* find(NODE* head, int data)
	{
		NODE* next = head;
		if (head == nullptr)
		{
			std::cout << "없는 리스트" << std::endl;
			return 0;
		}
		while (next != nullptr)
		{
			if (next->data == data)
				return next;
			else
				next = next->next;
		}
		std::cout << "일치하는 노드 없음" << std::endl;
		return 0;
	}

	static int remove(NODE* head, int data)
	{
		NODE* tmp = head->next;
		NODE* prev = head;
		if (head == nullptr)
		{
			std::cout << "없는 리스트" << std::endl;
			return -1;
		}
		if (head->data == data)
		{
			delete(head);
			return 0;
		}
		while (tmp != nullptr)
		{
			if (tmp->data == data)
			{
				prev->next = tmp->next;
				delete(tmp);
				return 0;
			}
			else
			{
				tmp = tmp->next;
				prev = prev->next;
			}
		}
		std::cout << "일치하는 노드 없음" << std::endl;
		return -1;
	}

	static int removeAll(NODE* head)
	{
		NODE* tmp1 = head;
		NODE* tmp2;
		while (tmp1 != nullptr)
		{
			tmp2 = tmp1->next;
			delete(tmp1);
			tmp1 = tmp2;
		}
		return 0;
	}
	
};


int main()
{
	NODE* head;
	head = NODE::append(nullptr, 10);
	for (int i = 20; i < 30 ; i++)
	{
		NODE::append(head, i);
	}
	std::cout << NODE::find(head, 10)->data <<std::endl;
	std::cout << NODE::find(head, 22)->data << std::endl;
	NODE::remove(head, 22);
	std::cout << NODE::find(head, 22)->data << std::endl;
	NODE::removeAll(head);
	std::cout << NODE::find(head, 10)->data << std::endl;
	return 0;
	



	/*int command = 0;
	std::cout << "**************************************************" << std::endl;
	std::cout << "1 : 노드 추가" << std::endl;
	std::cout << "2: 노드 검색" << std::endl;
	std::cout << "3: 특정 노드 삭제" << std::endl;
	std::cout << "4: 노드 모두 삭제" << std::endl;
	std::cout << "5: 종료" << std::endl;
	std::cout << "**************************************************" << std::endl;
	while (command > 5 || command <= 0)
	{
		std::cin >> command;
		switch (command)
		{
		case 1: 
			int data;
			
			break;
		}
	}*/
}