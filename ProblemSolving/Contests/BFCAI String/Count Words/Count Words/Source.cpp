#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	bool isWord = false;
	int spc = 0;
	for (int i = 0; i < s.size(); i++) {
		if (((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122))
			isWord = true;
		if (s[i] == ' ' && isWord) {
			spc += 1;
			isWord = false;
		}
	}
	if (isWord)
		cout << spc + 1;
	else
		cout << spc;
}