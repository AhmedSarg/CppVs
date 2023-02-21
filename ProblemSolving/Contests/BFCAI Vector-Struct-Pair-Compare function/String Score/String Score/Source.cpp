#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	ll n, score = 0;
	string v;
	bool last = false, skip = false;
	cin >> n >> v;
	for (ll i = 0; i < v.size(); i++) {
		if (skip == true) {
			skip = false;
		}
		else
		{
			if (i == n - 1)
				last = true;
			if (v[i] == 'V')
			{
				score += 5;
			}
			else if (v[i] == 'W')
			{
				score += 2;
			}
			else if (v[i] == 'X' && !last)
			{
				skip = true;
			}
			else if (v[i] == 'Y' && !last)
			{
				v.push_back(v[i + 1]);
				skip = true;
			}
			else if (v[i] == 'Z' && !last)
			{
				if (v[i + 1] == 'V') {
					score /= 5;
					skip = true;
				}
				else if (v[i + 1] == 'W') {
					score /= 2;
					skip = true;
				}
			}
		}
	}
	cout << score;
}