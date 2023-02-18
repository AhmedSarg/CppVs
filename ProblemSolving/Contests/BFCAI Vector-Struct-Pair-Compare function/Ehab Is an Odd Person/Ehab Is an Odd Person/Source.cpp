#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll& l1, ll& l2) {
	if ((l1 + l2) % 2 == 0)
		return false;
	return (l1 <= l2);
}

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	bool used = true;
	while (used) {
		used = false;
		int lim = 0;
		for (int j = 0; j < n; j++) {
			lim++;
			for (int i = 0; i < n - lim; i++) {
				if ((v[i] + v[i + lim]) % 2 != 0 && v[i] > v[i + lim]) {
					used = true;
					swap(v[i], v[i + lim]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}