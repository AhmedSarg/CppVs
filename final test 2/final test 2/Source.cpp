#include <iostream>
#include <string>
using namespace std;

const int SIZE = 40;
int Find_frequency(char[], char);
int xB;

int main()
{
	string sen;
	char cf;
	char sent[SIZE];

	cout << "enter a string" << endl;
	getline (cin, sen);

	xB = sen.length();

	for (int i = 0; i < xB; i++)
	{
		sent[i] = sen[i];
	}

	cout << "enter a character : ";
	cin >> cf;

	Find_frequency(sent, cf);
}

int Find_frequency(char str[], char ch)
{
	int sum = 0;

	for (int i = 0; i < xB; i++)
	{
		if (str[i] == ch)
		{
			sum += 1;
		}
	}
	cout << "Char '" << ch << "' occures " << sum << " times" << endl;
	return sum;
}