#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	cout << a.size() << " " << b.size() << endl << a << b << endl;
	char tmp = a[0];
	a[0] = b[0];
	b[0] = tmp;
	cout << a << " " << b;
}