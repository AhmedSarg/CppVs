#include <iostream>
using namespace std;

int main() {
	long long num;
	cin >> num;
	long long* testRes = new long long[num];
	for (long long i = 0; i < num; i++) {
		long long size;
		cin >> size;
		long long* arr = new long long[size];
		long long min;

		for (long long j = 0; j < size; j++) {
			cin >> arr[j];
		}
		min = arr[0] + arr[1] + (1 - 0);

		for (long long j = 0; j < size; j++) {
			for (long long k = j + 1; k < size; k++) {
				long long currentMin = arr[j] + arr[k] + ((k + 1) - (j + 1));
				if (currentMin < min) {
					min = currentMin;
				}
			}
		}

		testRes[i] = min;
	}

	for (long long i = 0; i < num; i++) {
		cout << testRes[i] << endl;
	}
}