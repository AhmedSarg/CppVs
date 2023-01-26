#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int arr[4] = { a, b, c, d };
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	a = arr[0];
	b = arr[1];
	c = arr[2];
	d = arr[3];
	cout << a << " " << b << " " << c << " " << d;
}