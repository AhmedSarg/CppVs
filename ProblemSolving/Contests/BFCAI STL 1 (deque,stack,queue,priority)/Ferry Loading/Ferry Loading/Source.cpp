#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll l;
		int m;
		cin >> l >> m;
		l *= 100;
		queue<int>ql, qr;
		string place = "left";
		int cross = 0;
		for (int i = 0; i < m; i++) {
			int a;
			string dir;
			cin >> a >> dir;
			if (dir == "left")
				ql.push(a);
			else
				qr.push(a);
		}
		while (!(ql.empty() && qr.empty())) {
			if (place == "left") {
				bool flag = 1;
				int sum = 0;
				while (flag && !ql.empty()) {
					sum += ql.front();
					if (sum <= l)
						ql.pop();
					else
						flag = 0;
				}
				place = "right";
				cross++;
			}
			else {
				bool flag = 1;
				int sum = 0;
				while (flag && !qr.empty()) {
					sum += qr.front();
					if (sum <= l)
						qr.pop();
					else
						flag = 0;
				}
				place = "left";
				cross++;
			}
		}
		cout << cross << endl;
	}
}