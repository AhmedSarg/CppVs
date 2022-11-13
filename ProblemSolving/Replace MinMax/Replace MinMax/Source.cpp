#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	long long* arr = new long long[size];
	long long min = LLONG_MAX;
	long long max = 0;
	int minIndex = 0;
	int maxIndex = 0;

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
	}

	long long temp = arr[maxIndex];
	arr[maxIndex] = arr[minIndex];
	arr[minIndex] = temp;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}