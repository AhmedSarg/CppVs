#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
	AhmedSarg
	int n;
	cin >> n;
	deque<int>q;
	char turn = 's';
	ll s = 0, d = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push_back(x);
	}
	while (!q.empty()) {
		int lar;
		if (q.front() > q.back()) {
			lar = q.front();
			q.pop_front();
		}
		else {
			lar = q.back();
			q.pop_back();
		}
		if (turn == 's') {
			s += lar;
			turn = 'd';
		}
		else {
			d += lar;
			turn = 's';
		}
	}
	cout << s << " " << d;
}