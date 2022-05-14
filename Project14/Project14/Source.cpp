#include <iostream>
using namespace std;

class rectangle;

class square
{
	int side;
public:
	square()
	{
		side = 0;
	}
	square(int side)
	{
		this->side = side;
	}
	void setSide(int side)
	{
		this->side = side;
	}
	int getSide()
	{
		return side;
	}
	int area()
	{
		int area = side * side;
		return area;
	}
	friend void largest (square sq, rectangle rec);
};

class rectangle
{
	int width, height;
public:
	rectangle()
	{
		width = 0;
		height = 0;
	}
	rectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
	}
	void setWidth(int width)
	{
		this->width = width;
	}
	void setHeight(int height)
	{
		this->height = height;
	}
	int getWidth()
	{
		return width;
	}
	int getHeight()
	{
		return height;
	}
	int area()
	{
		int area = width * height;
		return area;
	}
	friend void largest (square sq, rectangle rec);
};

void largest (square sq, rectangle rec)
{
	if (sq.area() > rec.area())
	{
		cout << "square's area is larger" << endl;
	}
	else if (sq.area() < rec.area())
	{
		cout << "rectangle's area is larger" << endl;
	}
	else if (sq.area() == rec.area())
	{
		cout << "square's area and rectangle's area are equal" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
}

int main()
{
	square s;
	rectangle r;
	int tmp;
	cout << "enter square side : ";
	cin >> tmp;
	s.setSide(tmp);
	cout << "enter rectangle width : ";
	cin >> tmp;
	r.setWidth(tmp);
	cout << "enter rectangle height : ";
	cin >> tmp;
	r.setHeight(tmp);
	largest(s, r);
}