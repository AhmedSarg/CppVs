#include <iostream>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
}tod;

int main()
{
	cout << "enter today's date (dd mm yyyy) : ";
	cin >> tod.day >> tod.month >> tod.year;
	tod.day += 15;
	tod.month += 1;
	if (tod.day > 31)
	{
		tod.day -= 31;
		tod.month += 1;
		if (tod.month > 12)
		{
			tod.month -= 12;
			tod.year += 1;
		}
	}
	cout << tod.day << "/" << tod.month << "/" << tod.year;
}