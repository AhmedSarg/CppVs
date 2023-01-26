#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll h = (ll)(n / 3600);
	ll m = ((ll)(n / 60)) % 60;
	ll s = (ll)(n % 60);
	cout << h << " " << m << " " << s;
}