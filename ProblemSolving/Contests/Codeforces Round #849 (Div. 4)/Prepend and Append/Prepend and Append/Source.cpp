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
		int rems = 0;
		for (int i = 0; i < n / 2; i++) {
			if ((s[i] == '0' && s[n - 1 - i] == '1') || (s[i] == '1' && s[n - 1 - i] == '0'))
				rems += 2;
			else
				break;
		}
		cout << (n - rems) << endl;
	}
}