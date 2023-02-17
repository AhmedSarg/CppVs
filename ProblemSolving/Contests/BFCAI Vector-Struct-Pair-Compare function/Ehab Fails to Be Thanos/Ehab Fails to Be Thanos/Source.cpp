#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>v(n * 2);
	bool same = true;
	cin >> v[0];
	int first = v[0];
	for (int i = 1; i < (n * 2); i++) {
		cin >> v[i];
		if (v[i] != first)
			same = false;
	}
	if (same)
		cout << -1;
	else {
		sort(v.begin(), v.end());
		for (int i = 0; i < (n * 2); i++)
			cout << v[i] << " ";
	}
}