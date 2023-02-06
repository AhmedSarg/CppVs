#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		bool good = false;
		for (int i = 0; i < s.size() - 2; i++) {
			if (s[i] == '0')
				if (s[i + 1] == '1' && s[i + 2] == '0') {
					good = true;
					break;
				}
			if (s[i] == '1')
				if (s[i + 1] == '0' && s[i + 2] == '1') {
					good = true;
					break;
				}
		}
		if (good)
			cout << "Good" << endl;
		else
			cout << "Bad" << endl;
	}
}