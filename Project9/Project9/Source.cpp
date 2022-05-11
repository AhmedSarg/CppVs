#include <iostream>
using namespace std;

int main()
{
	string x;
	cout << "Enter A Word To Encrypt : ";
	cin >> x;

	cout << x[0] << x.length() - 2 << x[x.length() - 1] << endl;

	system("pause");
	return 0;
}