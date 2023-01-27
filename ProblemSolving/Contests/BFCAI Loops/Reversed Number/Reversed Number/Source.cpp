#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	string ns = "";
	for (int i = s.size() - 1; i >= 0; i--)
		ns += s[i];
	cout << ns;
}