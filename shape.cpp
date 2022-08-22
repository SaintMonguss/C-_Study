#include <iostream>

class Point
{
public:
	int print()
	{
		std::cout << "m_x : " << m_x << std::endl;
		std::cout << "m_y : " << m_y << std::endl;
	}
	int m_x;
	int m_y;
};

class Shape
{
protected:
	Point m_start;
	Point m_end;
public:
	Shape(int x1, int y1, int x2, int y2)
	{
		m_start.m_x = x1;
		m_start.m_y = y1;
		m_end.m_x = x2;
		m_end.m_y = y2;
	}

	void SetStartPoint(Point &point)
	{
		m_start = point;
	}
	
	void SetStartPoint(int x, int y)
	{
		m_start.m_x = x;
		m_start.m_y = y;
	}

	void SetEndPoint(Point& point)
	{
		m_end = point;
	}

	void SetEndPoint(int x, int y)
	{
		m_end.m_x = x;
		m_end.m_y = y;
	}

	virtual void draw() = 0;
};

class Rectangle : public Shape
{
public:
	Rectangle(int x1, int y1, int x2, int y2) : Shape(x1, y1, x2, y2) {};

	int GetWidth()
	{
		return (m_start.m_x - m_end.m_x) < 0 ? -(m_start.m_x - m_end.m_x) : (m_start.m_x - m_end.m_x);
	}
	int GetHeight()
	{
		return (m_start.m_y - m_end.m_y) < 0 ? -(m_start.m_y - m_end.m_y) : (m_start.m_y - m_end.m_y);
	}
	int draw(int width, int height)
	{
		return width * height;
	}

};


