#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int sumA = (a[0] - 48) + (a[1] - 48) + (a[2] - 48);
	int sumB = (b[0] - 48) + (b[1] - 48) + (b[2] - 48);
	if (sumA >= sumB)
		cout << sumA;
	else
		cout << sumB;
}