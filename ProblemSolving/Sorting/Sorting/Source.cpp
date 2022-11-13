#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	long long* arr = new long long[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size - i; j++) {
			if (arr[j] < arr[j - 1]) {
				long long temp;
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}