#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int n, k, a[SIZE], winners = 0;

	cout << "Enter Number Of Participants And Minimum Score To Advance To Next Level Seperated By Space" << endl;
	cin >> n >> k;

	cout << "Enter " << n << " Scores Seperated By Space And Arranged Descendingly" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > k)
		{
			winners++;
		}
	}

	cout << "Number Of Participants Who Will Advance : " << winners << endl;

	system("pause");
	return 0;
}