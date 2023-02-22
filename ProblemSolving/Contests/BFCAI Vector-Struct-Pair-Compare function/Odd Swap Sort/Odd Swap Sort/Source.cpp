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
		vector<ll>v(n);
		ll odd = 0, even = 0;
		bool flag = false;
		for (ll i = 0; i < n; i++)
		{
			cin >> v[i];
			if (v[i] % 2 != 0)
				if (v[i] < odd)
					flag = true;
				else
					odd = v[i];
			else
				if (v[i] < even)
					flag = true;
				else
					even = v[i];
		}
		
		if (flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}