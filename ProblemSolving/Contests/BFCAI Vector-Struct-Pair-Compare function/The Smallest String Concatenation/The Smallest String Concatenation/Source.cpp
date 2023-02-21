#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string& s1, string& s2) {
	return ((s1 + s2) < (s2 + s1));
}

int main() {
	ll n;
	cin >> n;
	vector<string>v(n);
	string s = "";
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);
	for (ll i = 0; i < n; i++)
		s += v[i];
	cout << s;
}