#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<ll, ll>>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i + 1;
		}
		sort(v.begin(), v.end());
		bool sorted = true;
		for (int i = 0; i < n - 1; i++) {
			if (v[i].second > v[i + 1].second)
				if ((v[i].first + v[i + 1].first) % 2 == 0)
					sorted = false;
		}
		if (sorted)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}