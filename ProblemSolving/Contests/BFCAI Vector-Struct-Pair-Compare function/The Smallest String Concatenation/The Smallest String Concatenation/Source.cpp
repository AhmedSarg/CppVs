#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string& s1, string& s2) {
	return s1 >= s2;
}

int main() {
	ll n;
	cin >> n;
	vector<string>v1(n);
	vector<string>v2(n);
	for (int i = 0; i < n; i++)
		cin >> v1[i];
	v2 = v1;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), cmp);
	string vl1 = "", vl2 = "";
	for (int i = 0; i < n; i++) {
		vl1 += v1[i];
		vl2 += v2[i];
	}
	if (vl1 <= vl2)
		cout << vl1;
	else
		cout << vl2;
}