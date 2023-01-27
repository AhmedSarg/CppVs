#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char* res = new char[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a == b)
			res[i] = '=';
		else if (a < b)
			res[i] = '<';
		else if (a > b)
			res[i] = '>';
	}
	for (int i = 0; i < n; i++)
		cout << res[i] << endl;
}