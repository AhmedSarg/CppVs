#include <iostream>
using namespace std;

int main()
{
	string str;
	bool eq = true;
	int x, i = 0;

	cout << "enter a string : ";
	cin >> str;
	x = str.length();

	for (int j = x - 1; j >= 0; j--)
	{
		if (str[i] != str[j])
		{
			eq = false;
		}
		i++;
	}

	if (eq == true)
	{
		cout << "the string is palindrome" << endl;
	}
	else if (eq == false)
	{
		cout << "the string isn't palindrome" << endl;
	}
	else
	{
		cout << "unknown error" << endl;
	}
	return 0;
}