#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>v(n);
		bool acc = true;
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		for (int i = 0; i < n -	1; i++) {
			if (abs(v[i] - v[i + 1]) != 1 && v[i] - v[i + 1] != 0)
				acc = false;
		}
		if (acc) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}