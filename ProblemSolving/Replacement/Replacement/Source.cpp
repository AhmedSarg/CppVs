#include <iostream>
using namespace std;

int main() {
	long long size;
	cin >> size;
	long long* arr = new long long[size];

	for (long long  i = 0; i < size; i++) {
		long long x;
		cin >> x;
		if (x > 0)
			arr[i] = 1;
		else if (x < 0)
			arr[i] = 2;
		else
			arr[i] = 0;
	}

	for (long long i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}