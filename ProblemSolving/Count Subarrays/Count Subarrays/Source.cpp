#include <iostream>
using namespace std;

int main() {
	int tests;
	cin >> tests;
	int* res = new int[tests];

	for (int i = 0; i < tests; i++) {
		int size;
		cin >> size;
		long long* arr = new long long[size];
		res[i] = size;

		for (int j = 0; j < size; j++) {
			cin >> arr[j];
		}

		for (int j = 0; j < size - 1; j++) {
			for (int k = j; k < size - 1; k++) {
				if (arr[k] < arr[k + 1]) {
					res[i] += 1;
				}
				else {
					break;
				}
			}
		}
	}

	for (int i = 0; i < tests; i++) {
		cout << res[i] << endl;
	}
}