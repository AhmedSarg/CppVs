#include <iostream>
using namespace std;

int main() {
	long long m, n;
	cin >> m >> n;
	long long* arrA = new long long[m];
	long long* arrB = new long long[n];
	long long savedIndex = 0;
	bool found = false;
	bool allFound = true;

	for (int i = 0; i < m; i++) {
		cin >> arrA[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> arrB[i];
	}

	for (int i = 0; i < n; i++) {
		found = false;
		for (int j = savedIndex; j < m; j++) {
			if (arrB[i] == arrA[j]) {
				savedIndex = j + 1;
				found = true;
				break;
			}
		}
		if (!found)
			allFound = false;
	}

	if (allFound)
		cout << "YES";
	else
		cout << "NO";
}