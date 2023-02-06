#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool pal = true;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1])
			pal = false;
	}
	if (pal)
		cout << "YES";
	else
		cout << "NO";
}