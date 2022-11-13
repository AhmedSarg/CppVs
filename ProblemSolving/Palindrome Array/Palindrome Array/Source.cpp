#include <iostream>
using namespace std;

int main() {
	long long size;
	cin >> size;
	long long* arr = new long long[size];

	for (long long i = 0; i < size; i++) {
		cin >> arr[i];
	}

	bool palindrome = true;
	for (long long i = 0; i < size; i++) {
		if (arr[i] != arr[size - 1 - i]) {
			palindrome = false;
			break;
		}
	}

	if (palindrome == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}