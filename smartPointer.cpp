# include <iostream>

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);
};

class SmartPtr
{
private:
	Point* posptr;
public:
	SmartPtr(Point* ptr) : posptr(ptr)
	{}

	Point& operator*() const
	{
		return *posptr;
	}
	Point* operator ->() const
	{
		return posptr;
	}

	~SmartPtr()
	{
		delete posptr;
	}
};

int main()
{
	SmartPtr sptr1(new Point(1, 2));
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	std::cout << *sptr1;
	std::cout << *sptr2;
	std::cout << *sptr3;

	sptr1->SetPos(10, 20);
	std::cout << *sptr1;
	std::cout << *sptr2;
	std::cout << *sptr3;
}