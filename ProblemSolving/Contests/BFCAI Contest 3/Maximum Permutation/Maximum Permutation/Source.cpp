#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	int* arr = new int[n];
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	ll c = 1;
	sort(arr, arr + n);
	for (ll i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1] + 1)
			c += 1;
		else break;
	}
	cout << c;
}