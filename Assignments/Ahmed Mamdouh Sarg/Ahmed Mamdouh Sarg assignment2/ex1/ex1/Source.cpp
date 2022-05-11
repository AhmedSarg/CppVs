#include <iostream>
using namespace std;

int combination(int n, int k);
int factorial(int n);

int main()
{
	int n,k;
	cout << "enter a number  : ";
	cin >> n;
	cout << "enter a factorial : ";
	cin >> k;
	if (n < k)
	{
		cout << "error" << endl;
		exit(0);
	}
	else
	{
		combination(n, k);
	}
	
}

int factorial(int n)
{
	int result = 1;
	for (int i = n; i > 0; i--)
	{
		result *= i;
	}
	return result;
}

int combination(int n, int k)
{
	int result;
	result = factorial(n) / (factorial(k) * factorial(n - k));
	cout << "result : " << result;
	return result;
}