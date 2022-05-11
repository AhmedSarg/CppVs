#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int num;

	cout << "enter a number to get it's factorial : ";
	cin >> num;

	factorial(num);
}

int factorial(int x)
{
	int res = 1;

	for (int i = x; i > 0; i--)
	{
		res *= i;
	}

	cout << "Result = " << res;
	return res;
}