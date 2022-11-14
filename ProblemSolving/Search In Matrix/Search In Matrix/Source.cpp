#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	long long arr[100][100];
	long long num;
	bool found = false;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> num;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == num) {
				found = true;
			}
		}
	}

	if (found != true)
		cout << "will take number";
	else {
		cout << "will not take number";
	}
}