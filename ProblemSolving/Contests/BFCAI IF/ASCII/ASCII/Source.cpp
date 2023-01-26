#include <iostream>
using namespace std;

int main() {
	char x;
	cin >> x;
	int asc = (int)x;
	if (asc >= 65 && asc <= 90)
		cout << char(x + 32);
	else if (asc >= 97 && asc <= 122)
		cout << char(x - 32);
}