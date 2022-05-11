#include <iostream>
using namespace std;

class Date
{
	int month, day, year;
public :
	Date(int m, int d, int y)
	{
		if (m > 12 || m < 1)
		{
			month = 1;
		}
		else
		{
			month = m;
		}
		day = d;
		year = y;
	}
	void setMonth(int m)
	{
		if (m > 0 && m < 13)
		{
			month = m;
		}
		else
		{
			month = 1;
		}
	}
	void setDay(int d)
	{
		day = d;
	}
	void setYear(int y)
	{
		year = y;
	}
	int getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
	int getYear()
	{
		return year;
	}
	void displayDate()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
};

int main()
{
	int m, d, y;
	cout << "enter month : ";
	cin >> m;
	cout << "enter day : ";
	cin >> d;
	cout << "enter year : ";
	cin >> y;
	Date d1(m, d, y);
	cout << "month : " << d1.getMonth() << endl;
	cout << "day : " << d1.getDay() << endl;
	cout << "year : " << d1.getYear() << endl;
	d1.displayDate();
	d1.setMonth(12);
	d1.setDay(6);
	d1.setYear(2003);
	d1.displayDate();
	system("pause");
	return 0;
}