#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	long long* arrA = new long long[size];
	long long* arrB = new long long[size];
	bool* used = new bool[size];
	bool perm = true;

	for (int i = 0; i < size; i++) {
		cin >> arrA[i];
	}

	for (int i = 0; i < size; i++) {
		cin >> arrB[i];
		used[i] = false;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arrA[i] == arrB[j] && used[j] == false) {
				used[j] = true;
				break;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		if (used[i] == false)
			perm = false;
	}

	if (perm == false) {
		cout << "no";
	}
	else {
		cout << "yes";
	}
}