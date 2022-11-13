#include <iostream>
using namespace std;

void subArrays(long long arr[], long long start, long long end, long long size) {
	if (end == size)
		return;
	else if (start > end)
		subArrays(arr, 0, end + 1, size);
	else {
		long long max = 0;
		for (int i = start; i < end + 1; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		cout << max << " ";
		subArrays(arr, start + 1, end, size);
	}
}

long long total(long long num) {
	long long res = 0;
	while (num != 0) {
		res += num--;
	}
	return res;
}

int main() {
	/*
	long long n;
	cin >> n;
	long long arrs[100][100];
	long long* sizes = new long long[n];

	for (long long i = 0; i < n; i++) {
		long long size;
		cin >> size;
		sizes[i] = size;

		for (long long j = 0; j < size; j++) {
			cin >> arrs[i][j];
		}
	}

	for (long long i = 0; i < n; i++) {
		subArrays(arrs[i], 0, 0, sizes[i]);
		cout << endl;
	}*/
	long long n;
	cin >> n;
	long long max[100][100];
	long long* sizes = new long long[n];

	for (long long i = 0; i < n; i++) {
		cin >> sizes[i];
		long long* arr = new long long[sizes[i]];

		for (long long j = 0; j < sizes[i]; j++) {
			cin >> arr[j];
		}
		long long n = 0;

		for (long long j = 0; j < sizes[i]; j++) {
			for (long long k = j; k < sizes[i]; k++) {
				max[i][n] = 0;
				for (long long l = j; l <= k; l++) {
					if (arr[l] > max[i][n]) {
						max[i][n] = arr[l];
					}
				}
				n++;
			}
		}
	}
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < total(sizes[i]); j++) {
			cout << max[i][j] << " ";
		}
		cout << endl;
	}
}