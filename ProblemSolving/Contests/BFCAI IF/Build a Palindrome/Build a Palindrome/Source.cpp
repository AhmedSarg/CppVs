#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	if (s[0] == s[2])
		cout << s;
	else if (s[0] == s[1] && s[0] != s[2] && s[1] != s[2])
		cout << s[0] << s[2] << s[1];
	else if (s[1] == s[2] && s[0] != s[1] && s[0] != s[2])
		cout << s[1] << s[0] << s[2];
	else
		cout << "Impossible";
}