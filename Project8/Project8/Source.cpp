#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char d3[5][5][5];
	

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				d3[i][j][k] = '#';
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << setw(0);
		for (int j = 0; j < 5; j++)
		{
			cout << setw(0);
			int l = 1;
			for (int k = 0; k < 5; k++)
			{
				l += 4;
				cout << d3[i][j][k];
				cout << endl << setw(k + l);
				for ()
			}
		}
	}
}