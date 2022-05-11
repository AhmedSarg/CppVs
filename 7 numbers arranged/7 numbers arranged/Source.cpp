#include <iostream>
using namespace std;

int main()
{
	const int size = 7;
	int numbers[size];

	cout << "enter 7 numbers" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "enter number " << i + 1 << " : ";
		cin >> numbers[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (numbers[j] < numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}
		}
	}

	cout << "list : ";

	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << " ";
	}
}