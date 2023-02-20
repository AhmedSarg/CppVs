#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int q;
	cin >> q;
	while (q--) {
		ll a, b;
		cin >> a >> b;
		ll score = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '+') {
				if (score >= 0)
					score += min(a, b);
				else if (score < 0)
					if (score == -min(a, b))
						score += min(a, b);
					else
						score += max(a, b);
			}
			else {
				if (score <= 0)
					score -= min(a, b);
				else if (score > 0)
					if (score == min(a, b))
						score -= min(a, b);
					else
						score -= max(a, b);
			}
		}
		if (score == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}