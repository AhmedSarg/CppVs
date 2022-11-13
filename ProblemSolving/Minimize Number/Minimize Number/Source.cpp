#include <iostream>
using namespace std;

int main() {
	int size, res = 0;
	cin >> size;
	long long* arr = new long long[size];

	bool allEven = true;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (arr[i] % 2 != 0) {
			allEven = false;
		}
	}

	while (allEven) {
		for (int i = 0; i < size; i++) {
			if (arr[i] % 2 != 0) {
				allEven = false;
			}
			arr[i] /= 2;
		}
		if (allEven) {
			res += 1;
		}
	}
	cout << res;
}