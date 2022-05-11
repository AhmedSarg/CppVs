#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	int arr[SIZE];
	int sum[SIZE] = { 0,0,0,0,0,0,0 };
	int most;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i] == arr[j])
			{
				sum[i]++;
			}
		}
	}

	cout << "Original array : ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << " " << arr[i];
	}

	most = sum[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (sum[i] > most)
		{
			most = arr[i];
		}
	}

	cout << endl << "Most occured number : " << most;
	return 0;
}