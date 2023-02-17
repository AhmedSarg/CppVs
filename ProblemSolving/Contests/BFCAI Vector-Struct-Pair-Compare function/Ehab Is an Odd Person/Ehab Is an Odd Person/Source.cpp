#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll& l1, ll& l2) {
	if (l1 + l2 % 2 != 0)
		return l1 < l2;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}