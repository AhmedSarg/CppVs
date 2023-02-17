#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool rev(ll& n1, ll& n2) {
	return n1 > n2;
}

int main() {
	ll n;
	cin >> n;
	ll sum = 0;
	vector <ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), rev);
	ll nCopy = n;
	sum += v[0] * nCopy;
	for (ll i = 1; i < n; i++) {
		sum += v[i] * nCopy--;
	}
	cout << sum;
}