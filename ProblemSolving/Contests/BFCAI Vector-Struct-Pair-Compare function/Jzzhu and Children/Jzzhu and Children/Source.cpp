#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i + 1;
	}
	while (v.size() != 1) {
		if (m >= v[0].first)
			v.erase(v.begin());
		else {
			v[0].first -= m;
			v.push_back(v[0]);
			v.erase(v.begin());
		}
	}
	cout << v[0].second;
}