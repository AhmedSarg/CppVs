#include <iostream>
using namespace std;

int main()
{
	string weak[7] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
	int x, y;
	cin >> x >> y;
	int end = x + y;
	for (int i = x; i < x + y; i++)
	{
		if (end > 6)
		{
			end -= 7;
		}
		else
		{
			break;
		}
	}
	cout << end;
}