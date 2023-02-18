#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll& p1, ll& p2) {
	if ((p1 + p2) % 2 != 0 && p1 > p2)
		return p1 > p2;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll>v(n);
		vector<ll>vCopy(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		bool used = true;
		sort(v.begin(), v.end());
		/*while (used) {
			used = false;
			for (int i = 0; i < n - 1; i++) {
				if ((v[i] + v[i + 1]) % 2 != 0 && v[i] > v[i + 1]) {
					used = true;
					swap(v[i], v[i + 1]);
				}
			}
		}*/
		vCopy = v;
		sort(vCopy.begin(), vCopy.end());
		if (v == vCopy)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}