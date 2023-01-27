#include <iostream>
#define ll long long
using namespace std;

int main() {
	string n;
	cin >> n;
	ll sum = 0;
	for (ll i = 0; i < n.size(); i++)
		sum += n[i] - 48;
	cout << sum;
}