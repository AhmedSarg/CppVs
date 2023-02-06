#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int x = 0 , y = 0;
		bool passed = false;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'U')
				y += 1;
			else if (s[i] == 'D')
				y -= 1;
			else if (s[i] == 'R')
				x += 1;
			else if (s[i] == 'L')
				x -= 1;
			if (x == 1 && y == 1)
				passed = true;
		}
		if (passed)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}