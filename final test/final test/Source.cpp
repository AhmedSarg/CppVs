#include <iostream>
#include <string>
using namespace std;

const int SIZE = 40;
int Find_frequency(char[], char);

int main()
{
	char sen[SIZE];
	char find;

	cout << "enter a string" << endl;
	cin >> sen[SIZE];

	cout << "enter a character : ";
	cin >> find;

	Find_frequency(sen, find);
}

int Find_frequency(char str[], char ch)
{
	int sum = 0;

	for (int i = 0; i < 100;)
	{
		if (str[i] == ch)
		{
			sum += 1;
		}
	}
	cout << "Char '" << ch << "' occures " << str << " times" << endl;
	return sum;
}