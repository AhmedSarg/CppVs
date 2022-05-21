#include <iostream>
#include <iomanip>
using namespace std;

class rect
{
	string dim[5];
	int j = 0;
public:
	rect()
	{
		dim[0] = "# # # # #\n";
		dim[1] = "#       #\n";
		dim[2] = "#       #\n";
		dim[3] = "#       #\n";
		dim[4] = "# # # # #";
	}
	void show()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << dim[i];
		}
		cout << endl;
	}
	void move()
	{
		string space = "";
		for (int i = 0; i < j; i++)
		{
			space += " ";
		}
		for (int i = 0; i < 5; i++)
		{
			cout << space << dim[i];
		}
		cout << endl;
		j += 14;
	}
};

int main()
{
	rect a;
	int k = 0;
	while (k < 15)
	{
		a.move();
		k += 1;
	}
}