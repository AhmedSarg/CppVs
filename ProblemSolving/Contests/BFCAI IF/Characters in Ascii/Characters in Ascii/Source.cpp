#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	int asc = (int)c;
	if (asc >= 65 && asc <= 90)
		cout << "capital" << ' ' << asc - 65;
	else if (asc >= 97 && asc <= 122)
		cout << "small" << ' ' << asc - 97;
	else if (asc >= 48 && asc <= 57)
		cout << "digit";
	else
		cout << "symbol";
}