#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
	return p1.first > p2.first;
}

int main() {
	int n;
	cin >> n;
	ll sum = 0;
	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i + 1;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++) {
		sum += (v[i].first * i) + 1;
	}
	cout << sum << endl;
	for (int i = 0; i < n; i++)
		cout << v[i].second << " ";
}