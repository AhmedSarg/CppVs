#include <iostream>
using namespace std;

int main()
{
	int n;
	string str, newStr;
	cout << "enter a number : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			str += '1';
		}
		str += '+';
	}

	for (int i = 0; i < (str.length() - 1); i++)
	{
		newStr += str[i];
	}
	cout << newStr << endl;
}