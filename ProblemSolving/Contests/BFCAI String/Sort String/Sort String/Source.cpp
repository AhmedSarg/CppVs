#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int n;
	cin >> n >> s;
	char* p = &s[0];
	sort(p, p + n);
	cout << s;
}