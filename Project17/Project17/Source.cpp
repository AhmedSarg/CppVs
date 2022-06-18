#include <iostream>
using namespace std;

class SHAPE
{
protected:
	double width, height;
public:
	void setData(double w, double h)
	{
		width = w;
		height = h;
	}
	virtual double display() = 0;
};

class TRIANGLE : public SHAPE
{
public:
	double display()
	{
		double area = 0.5 * width * height;
		return area;
	}
};

class RECTANGLE : public SHAPE
{
public:
	double display()
	{
		double area = width * height;
		return area;
	}
};

int main()
{
	TRIANGLE tr;
	RECTANGLE rect;
	tr.setData(3, 4);
	rect.setData(3, 4);
	cout << "area = " << tr.display() << endl;
	cout << "area = " << rect.display() << endl;
	system("pause");
	return 0;
}