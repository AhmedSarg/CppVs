#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int n, score = 0;
	string v;
	bool last = false;
	cin >> n >> v;
	for (int i = 0; i < v.size(); i++) {
		if (i == n - 1)
			last = true;
		if (v[i] == 'V')
			score += 5;
		else if (v[i] == 'W')
			score += 2;
		else if (v[i] == 'X' && !last)
			v.erase(v.begin() + i);
		else if (v[i] == 'Y' && !last) {
			v.push_back(v[i + 1]);
			v.erase(v.begin() + i);
		}
		else if (v[i] == 'Z' && !last)
			if (v[i + 1] == 'V') {
				score /= 5;
				v.erase(v.begin() + i + 1);
			}
			else if (v[i + 1] == 'W') {
				score /= 2;
				v.erase(v.begin() + i + 1);
			}
	}
	cout << score;
}