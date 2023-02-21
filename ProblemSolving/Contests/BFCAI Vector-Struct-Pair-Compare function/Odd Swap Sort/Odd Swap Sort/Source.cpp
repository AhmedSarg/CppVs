#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<pair<ll, ll>>v(n);
		vector<pair<ll, ll>>vCopy(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> v[i].first;
			v[i].second = i + 1;
		}
		vCopy = v;
		sort(vCopy.begin(), vCopy.end());
		sort(v.begin(), v.end());
		if (v == vCopy)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}