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
		if (arr[i] <= 10) {
			cout << "A[" << i << "]" << " = " << arr[i] << endl;
		}
	}
}