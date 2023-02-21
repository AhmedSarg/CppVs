#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<pair<ll, int>>v(n);
	bool allEvens = true;
	bool allOdds = true;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first;
		v[i].second = i + 1;
		if (v[i].first % 2 == 0)
			allOdds = false;
		if (v[i].first % 2 != 0)
			allEvens = false;
	}
	if (!allEvens && !allOdds)
		sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
		cout << v[i].first << " ";
}