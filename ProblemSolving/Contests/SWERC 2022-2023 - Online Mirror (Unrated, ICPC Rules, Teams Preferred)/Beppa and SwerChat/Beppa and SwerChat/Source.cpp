#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>v1(n);
		vector<int>v2(n);
		for (int i = 0; i < n; i++)
			cin >> v1[i];
		for (int i = 0; i < n; i++)
			cin >> v2[i];
		int exist = 0;
		reverse(v1.begin(), v1.end());
		reverse(v2.begin(), v2.end());
		int maxN = 0;
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (j >= n)
				break;
			while (v2[i] != v1[j] && j < n) {
				exist++;
				j++;
			}
			j++;
		}
		cout << exist << endl;
	}
}