#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	char* c = new char[n];
	for (int i = 0; i < n; i++)
		c[i] = s[i];
	sort(c, c + n);
	for (int i = 0; i < n - 1; i++) {
		int count = 1;
		char temp = c[i];
		while (c[i] == c[i + 1] && i < n - 1) {
			i += 1;
			count += 1;
		}
		cout << temp << " : " << count << endl;
	}
	if (c[n - 1] != c[n - 2])
		cout << c[n - 1] << " : " << 1 << endl;
}