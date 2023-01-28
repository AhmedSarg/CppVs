#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll arr[100][100];
		ll* fs = new ll[n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++)
				cin >> arr[i][j];
			fs[i] = arr[i][0];
		}
		sort(fs, fs + n);
		int f = n - 1;
		ll dif;
		if (fs[0] == fs[1])
			dif = fs[0];
		else
			dif = fs[n - 1];
		if (arr[0][0] != arr[n - 1][0] && arr[1][0] != arr[n - 1][0])
			f = n - 1;
		else {
			for (int i = 0; i < n - 1; i++) {
				if (arr[i][0] != arr[n - 1][0]) {
					f = i;
				}
			}
		}
		cout << dif << " ";
		for (int i = 0; i < n - 1; i++)
			cout << arr[f][i] << " ";
		cout << endl;
	}
}