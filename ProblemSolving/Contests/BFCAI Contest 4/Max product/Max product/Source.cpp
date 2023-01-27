#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll* arr = new ll[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		cout << arr[n - 1] * arr[n - 2] << endl;
	}
}