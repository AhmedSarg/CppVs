#include <iostream>
using namespace std;

int power(int, int = 1);

int main()
{
	int num, pow , result;
	cout << "enter a number : ";
	cin >> num;
	cout << "enter a power : ";
	cin >> pow;
	result = power(num, pow);
	cout << "result = " << result;
}

int power(int num, int pow)
{
	int res = 1;
	for (int i = 0; i < pow; i++)
	{
		res *= num;
	}
	return res;
}