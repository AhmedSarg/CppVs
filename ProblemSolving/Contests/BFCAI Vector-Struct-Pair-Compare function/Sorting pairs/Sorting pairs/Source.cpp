#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<string, ll> &p1, pair<string, ll> &p2) {
	if (p1.second == p2.second)
		return (p1.first < p2.first);
	return (p1.second > p2.second);
}

int main() {
	int n;
	cin >> n;
	vector <pair<string, ll>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << endl;
}