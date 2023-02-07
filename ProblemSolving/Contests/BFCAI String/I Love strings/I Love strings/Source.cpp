#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s, t;
		cin >> s >> t;
		int ssz = s.size(), tsz = t.size();
		int mx = max(ssz, tsz);
		int mn = min(ssz, tsz);
		if (ssz == tsz)
			for (int i = 0; i < mx; i++)
				cout << s[i] << t[i];
		else if (ssz > tsz) {
			int i = 0;
			for (i; i < mn; i++)
				cout << s[i] << t[i];
			for (i + 1; i < ssz; i++)
				cout << s[i];
		}
		else if (ssz < tsz) {
			int i = 0;
			for (i; i < mn; i++)
				cout << s[i] << t[i];
			for (i + 1; i < tsz; i++)
				cout << t[i];
		}
		cout << endl;
	}
}