#include <iostream>
#include <iomanip>
using namespace std;

class DivSales
{
	int first_half, second_half;
	static int total_sales;
public:
	DivSales()
	{
		first_half = 0;
		second_half = 0;
	}
	void sales(int first, int second)
	{
		first_half = first;
		second_half = second;
		int sum = first_half + second_half;
		total_sales += sum;
	}
	int getFirst()
	{
		return first_half;
	}
	int getSecond()
	{
		return second_half;
	}
	static int getTotalSales()
	{
		return total_sales;
	}
};

int DivSales::total_sales = 0;

int main()
{
	DivSales x[3];

	for (int i = 0; i < 3; i++)
	{
		int f, s;
		cout << "Div " << i + 1 << endl;
		cout << "Enter First Half Sales : ";
		cin >> f;
		cout << "Enter Second Half Sales : ";
		cin >> s;
		x[i].sales(f, s);
		cout << endl;
	}

	cout << endl;
	cout << left << setw(18) << "Div" << setw(25) << "First Half" << setw(26) << "Second Half" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << left << setw(18) << i + 1 << setw(25) << x[i].getFirst() << setw(26) << x[i].getSecond() << endl;
	}
	cout << "\nTotal Sales : " << DivSales::getTotalSales() << endl;

}