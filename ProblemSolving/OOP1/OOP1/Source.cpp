#include <iostream>
#include <string>
using namespace std;

struct date
{
	int day;
	string month;
	int year;
};

class Employee
{
	string name;
	int number;
	date hireDate;
public:
	Employee()
	{
		name = "";
		number = 0;
		hireDate.day = 1;
		hireDate.month = "January";
		hireDate.year = 0;
	}
	Employee(string name, int number, date hireDate)
	{
		this->name = name;
		this->number = number;
		this->hireDate = hireDate;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setNumber(int number)
	{
		this->number = number;
	}
	void setHireDate(date hireDate)
	{
		this->hireDate = hireDate;
	}
	string getName()
	{
		return name;
	}
	int getNumber()
	{
		return number;
	}
	date getHireDate()
	{
		return hireDate;
	}
};

class prodWorker : public Employee
{
	int shift;
	double pay;
public:
	prodWorker() : Employee()
	{
		shift = 0;
		pay = 0;
	}
	prodWorker(int shift, double pay, string name, int number, date hireDate) : Employee(name, number, hireDate)
	{
		this->shift = shift;
		this->pay = pay;
	}
	void setShift(int shift)
	{
		this->shift = shift;
	}
	void setPay(double pay)
	{
		this->pay = pay;
	}
	int getShift()
	{
		return shift;
	}
	double getPay()
	{
		return pay;
	}
};

int main()
{
	date a;
	a.day = 6;
	a.month = "December";
	a.year = 2003;
	prodWorker w1(2, 50000, "ahmed", 1, a);
	string shift;
	if (w1.getShift() == 1)
	{
		shift = "Day";
	}
	else if (w1.getShift() == 2)
	{
		shift = "Night";
	}
	cout << "Name : " << w1.getName() << endl;
	cout << "Number : " << w1.getNumber() << endl;
	cout << "Hire Date : " << w1.getHireDate().day << "/" << w1.getHireDate().month << "/" << w1.getHireDate().year << endl;
	cout << "Shift : " << shift << endl;
	cout << "Hourly Pay Rate : " << w1.getPay() << "$" << endl;

	system("pause");
	return 0;
}