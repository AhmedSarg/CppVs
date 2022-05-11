#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	int* ptr ;
	ptr = arr;

	cout << "Enter 5 Elements For The Array : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}

	cout << "Normally : ";
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << " ";
	}
	
	cout << endl << "Inversed : ";
	for (int i = 4; i >= 0; i--)
	{
		cout << *(ptr + i) << " ";
	}

	return 0;
}