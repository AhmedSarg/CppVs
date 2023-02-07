#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	while (q--) {
		string qu;
		cin >> qu;
		if (qu == "pop_back") {
			s.pop_back();
		}
		else if (qu == "front")
			cout << s.front() << endl;
		else if (qu == "back")
			cout << s.back() << endl;
		else if (qu == "sort") {
			int l, r;
			cin >> l >> r;
			char* p = &s[0];
			sort(p + l - 1, p + r);
		}
		else if (qu == "reverse") {
			int l, r;
			cin >> l >> r;
			for (int i = l - 1; i <= r / 2; i++) {
				char tmp = s[i];
				s[i] = s[r - 1 - i + l - 1];
				s[r - 1 - i + l - 1] = tmp;
			}
		}
		else if (qu == "print") {
			int pos;
			cin >> pos;
			cout << s[pos] << endl;
		}
		else if (qu == "substr") {
			int l, r;
			cin >> l >> r;
			cout << s.substr(l - 1, r) << endl;
		}
		else if (qu == "push_back") {
			char x;
			cin >> x;
			s.push_back(x);
		}
	}
}