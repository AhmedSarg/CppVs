#include <iostream>
using namespace std;

class Binary
{
	float x;
public:
	Binary()
	{
		x = 0;
	}
	Binary(float n)
	{
		x = n;
	}
	void setX(float n)
	{
		x = n;
	}
	float getX()
	{
		return x;
	}
	Binary operator+(Binary c)
	{
		Binary tmp;
		tmp.setX(this->getX() + c.getX());
		return tmp;
	}
	Binary operator-(Binary c)
	{
		Binary tmp;
		tmp.setX(this->getX() - c.getX());
		return tmp;
	}
	Binary operator*(Binary c)
	{
		Binary tmp;
		tmp.setX(this->getX() * c.getX());
		return tmp;
	}
	Binary operator/(Binary c)
	{
		Binary tmp;
		tmp.setX(this->getX() / c.getX());
		return tmp;
	}
};

int main()
{
	float tmp;
	cout << "Enter A Number : ";
	cin >> tmp;
	Binary obj1(tmp);
	cout << "Enter Another Number : ";
	cin >> tmp;
	Binary obj2(tmp);
	
	cout << "Summation : " << (obj1 + obj2).getX() << endl;
	cout << "Subtraction : " << (obj1 - obj2).getX() << endl;
	cout << "Multiplication : " << (obj1 * obj2).getX() << endl;
	cout << "Division : " << (obj1 / obj2).getX() << endl;
}