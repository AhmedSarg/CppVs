#include <iostream>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		ll l, r;
		cin >> l >> r;
		cout << ((r * (r + 1)) / 2) - ((l * (l + 1)) / 2) + l << endl;
	}
}