#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	long long* arr = new long long[size];

	long long min = LLONG_MAX;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	int freq = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == min) {
			freq += 1;
		}
	}
	if (freq % 2 == 0) {
		cout << "Unlucky";
	}
	else {
		cout << "Lucky";
	}
}