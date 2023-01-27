#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[i] = x * (i + 1);
	}
	sort(arr, arr + n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0 && k) {
			sum += arr[i];
			k -= 1;
		}
	}
	cout << sum;
}