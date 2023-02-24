#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
using namespace std;

int main() {
	AhmedSarg
	int n;
	cin >> n;
	deque<int>q;
	for (int i = 1; i <= n; i++)
		q.push_back(i);
	while (q.size() != 1) {
		cout << q.front() << " ";
		q.pop_front();
		int f = q.front();
		q.pop_front();
		q.push_back(f);
	}
	cout << endl << q.front();
}