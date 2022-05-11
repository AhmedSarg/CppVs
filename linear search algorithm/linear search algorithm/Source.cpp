#include <iostream>
using namespace std;

int main()
{
	int list[10];
	int need;
	bool found = false;

	cout << "input the number for the list" << endl;
	for (int n = 0; n < 10; n++)
	{
		cout << "enter number " << n + 1 << " : ";
		cin >> list[n];
	}

	cout << "enter a number to search for : ";
	cin >> need;
	for (int i = 0; i < 10; i++)
	{
		if (list[i] == need)
		{
			cout << "FOUND" << endl << "LOOPS = " << i + 1 << endl;
			found = true;
			return need;
		}
	}
	if (found == false)
	{
		cout << "NOT FOUND" << endl;
		return 0;
	}
	
}