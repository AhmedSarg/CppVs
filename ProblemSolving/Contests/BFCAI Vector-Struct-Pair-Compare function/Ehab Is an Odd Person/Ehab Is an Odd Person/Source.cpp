#include <bits/stdc++.h>
#define ll long long
using namespace std;
//9
//1 8 2 7 3 6 4 5 0
//0 8 2 7 3 6 4 5 1
//0 1 2 7 3 6 4 5 8
//0 1 2 4 3 6 7 5 8
//0 1 2 3 4 6 7 5 8
//0 1 2 3 4 5 7 6 8
//0 1 2 3 4 5 6 7 8

//2 9 3 8 4 7 5 6 1

//7 2 4 6 8

bool cmp(pair<ll, int>& p1, pair<ll, int>& p2) {
	if ((p1.first + p2.first) % 2 != 0 && p1.first < p2.first && p1.second > p2.second)
		return true;
	return false;
}

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