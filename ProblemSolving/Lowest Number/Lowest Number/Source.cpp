#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	long long* arr = new long long[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	long long min = arr[0];
	int ind = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			ind = i;
		}
	}
	cout << min << " " << ind + 1;
}