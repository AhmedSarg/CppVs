#include <iostream>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll w, h;
		cin >> w >> h;
		if (w == h)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}