#include <iostream>
using namespace std;

class circle
{
private:
	double diameter;
	int cx, cy;
public:
	circle(double d, int x, int y)
	{
		diameter = d;
		cx = x;
		cy = y;
	}
	void operator= (circle &cr)
	{
		diameter = cr.diameter;
		cx = cr.cx;
		cy = cr.cy;
	}
	double getd()
	{
		return diameter;
	}
	int getcx()
	{
		return cx;
	}
	int getcy()
	{
		return cy;
	}
};
int main()
{
	circle c1(1, 2, 3);
	circle c2(3, 4, 5);
	c1 = c2;
	cout << c1.getd() << c1.getcx() << c1.getcy() << endl;
}