#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	if (s.size() == 1)
		cout << s;
	else {
		cout << ((int)s[s.size() - 1] - 48) + ((int)s[s.size() - 2] - 48);
	}
}