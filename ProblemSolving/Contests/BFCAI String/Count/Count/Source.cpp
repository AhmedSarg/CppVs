#include <iostream>
#define ll long long
using namespace std;

int main() {
	string s;
	cin >> s;
	ll sum = 0;
	for (int i = 0; i < s.size(); i++)
		sum += s[i] - 48;
	cout << sum;
}