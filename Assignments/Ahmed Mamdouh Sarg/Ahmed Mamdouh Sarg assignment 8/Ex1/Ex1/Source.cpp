#include <iostream>
using namespace std;

class SHAPE
{
protected:
	double width, height;
public:
	void setData(double a, double b)
	{
		width = a;
		height = b;
	}
	virtual double display()
	{
		return 0;
	}
};

class RECTANGLE : public SHAPE
{
public:
	double display()
	{
		return (width * height);
	}
};

class TRIANGLE : public SHAPE
{
public:
	double display()
	{
		return (0.5 * width * height);
	}
};

int main()
{
	SHAPE shp;
	RECTANGLE rct;
	TRIANGLE tri;
	shp.setData(3, 4);
	rct.setData(3, 4);
	tri.setData(3, 4);
	cout << "shape : " << shp.display() << endl;
	cout << "rectangle : " << rct.display() << endl;
	cout << "triangle : " << tri.display() << endl;
	system("pause");
	return 0;
}