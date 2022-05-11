#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int nums[SIZE], max, min;
	cout << "enter 10 numbers : ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> nums[i];
	}
	max = nums[0], min = nums[0];
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] < min)
		{
			min = nums[i];
		}
	}
	cout << "Maximum Number : " << max << endl;
	cout << "Minimum Number : " << min << endl;
}