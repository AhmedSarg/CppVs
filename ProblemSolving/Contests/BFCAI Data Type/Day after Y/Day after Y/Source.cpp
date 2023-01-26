#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int d = x + y;
	while (d >= 7)
		d -= 7;
	cout << d;
}