#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int learned = 0;
	vector<pair<int, int>>v(n);
	vector<pair<int, int>>l;
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i + 1;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
		if (v[i].first <= m) {
			learned++;
			m -= v[i].first;
			l.push_back(v[i]);
		}
		else
			break;
	cout << learned << endl;
	for (int i = 0; i < learned; i++)
		cout << l[i].second << " ";
}