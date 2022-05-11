#include <iostream>
using namespace std;

class  circle
{
	double radius;
	double PI;

public:

	circle(double rad)
	{
		radius = rad;
		PI = 3.142857143;
	}

	void setRadius(double rad)
	{
		radius = rad;
	}

	double getArea()
	{
		double a = (PI * radius * radius);
		return a;
	}

	~circle(){}

};

int main()
{
	circle c(5);
	cout << c.getArea() << endl;
	c.setRadius(3.5);
	cout << c.getArea() << endl;
}