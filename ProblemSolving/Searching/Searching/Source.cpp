#include <iostream>
using namespace std;

int main() {

	long long size;
	cin >> size;
	long long *arr = new long long[size];
	long long x;

	for (long long i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cin >> x;
	bool found = false;
	for (long long i = 0; i < size; i++) {
		if (arr[i] == x) {
			cout << i;
			found = true;
			break;
		}
	}
	if (found == false)
		cout << -1;

	return 0;
}