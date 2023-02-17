#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll first, second;
	vector<ll>v1(n);
	vector<ll>v2(n);
	vector<ll>v3(n);
	for (int i = 0; i < n; i++)
		cin >> v1[i];
	sort(v1.begin(), v1.end());
	for (int i = 0; i < n - 1; i++)
		cin >> v2[i];
	sort(v2.begin(), v2.end() - 1);
	for (int i = 0; i < n; i++)
		if (v1[i] != v2[i])
		{
			first = v1[i];
			break;
		}
	for (int i = 0; i < n - 2; i++)
		cin >> v3[i];
	sort(v3.begin(), v3.end() - 2);
	for (int i = 0; i < n; i++)
		if (v2[i] != v3[i])
		{
			second = v2[i];
			break;
		}
	cout << first << "\n" << second;
}