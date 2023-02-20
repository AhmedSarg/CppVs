#include <bits/stdc++.h>
using namespace std;
bool rev(char& c1, char& c2) {
	return c1 > c2;
}

int main() {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<char>v(n);
	for (int i = 0; i < n; i++)
		v[i] = s[i];
	while (q--) {
		string x;
		cin >> x;
		if (x == "pop_back") {
			v.pop_back();
		}
		else if (x == "front") {
			cout << v.front() << endl;
		}
		else if (x == "back") {
			cout << v.back() << endl;
		}
		else if (x == "sort") {
			int l, r;
			cin >> l >> r;
			if (l > r)
				swap(l, r);
			l--;
			sort(v.begin() + l, v.begin() + r);
		}
		else if (x == "reverse") {
			int l, r;
			cin >> l >> r;
			if (l > r)
				swap(l, r);
			l--;
			reverse(v.begin() + l, v.begin() + r);
		}
		else if (x == "print") {
			int pos;
			cin >> pos;
			cout << v[pos - 1] << endl;
		}
		else if (x == "substr") {
			int l, r;
			cin >> l >> r;
			if (l > r)
				swap(l, r);
			l--;
			for (int i = l; i < r; i++)
				cout << v[i];
			cout << endl;
		}
		else if (x == "push_back") {
			char c;
			cin >> c;
			v.push_back(c);
		}
	}
}