#include <iostream>
#define ll long long
using namespace std;

int main() {
	string s;
	ll n;
	cin >> n >> s;
	for (ll i = 0; i < n - 1; i++)
		for (ll j = i + 1; j < n; j++)
			if (s[i] > s[j]) {
				char tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
	cout << s;
}