#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
	AhmedSarg;
	int n, m;
	cin >> n >> m;
	priority_queue<int>q1;
	priority_queue<int, vector<int>, greater<int>>q2;
	int zol1 = 0, zol2 = 0;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		q1.push(x);
		q2.push(x);
	}
	while (n) {
		zol1 += q1.top();
		int x = q1.top() - 1;
		q1.pop();
		if (x != 0)
			q1.push(x);

		zol2 += q2.top();
		int y = q2.top() - 1;
		q2.pop();
		if (y != 0)
			q2.push(y);

		n--;
	}
	cout << zol1 << " " << zol2;
}