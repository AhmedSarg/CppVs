#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter number of rows : ";
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}