#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100][100];
	int mainDiag = 0;
	int secDiag = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (i == j) {
				mainDiag += arr[i][j];
			}
			if ((i + j) == (n - 1)) {
				secDiag += arr[i][j];
			}
		}
	}

	int sum = abs(mainDiag - secDiag);
	cout << sum;
}