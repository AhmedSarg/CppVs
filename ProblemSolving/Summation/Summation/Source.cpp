#include <iostream>
using namespace std;

int main() {
	long long size;
	cin >> size;
	long long* arr = new long long[size];

	long long sum = 0;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	cout << abs(sum);

	return 0;
}