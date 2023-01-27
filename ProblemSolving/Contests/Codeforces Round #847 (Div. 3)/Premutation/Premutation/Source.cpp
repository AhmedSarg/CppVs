#include <iostream>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll arr[100][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++)
				cin >> arr[i][j];
		}
		int f = n - 1;
		ll other = arr[n - 1][0];
		for (int i = 0; i < n - 1; i++) {
			if (arr[i][0] != arr[n - 1][0]) {
				f = i;
			}
			else
				other = arr[i][0];
		}
		cout << other << " ";
		for (int i = 0; i < n - 1; i++)
			cout << arr[f][i] << " ";
		cout << endl;
	}
}