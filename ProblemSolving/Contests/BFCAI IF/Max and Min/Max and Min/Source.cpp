#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll arr[3] = { a, b, c };
	ll min = a;
	ll max = a;
	for (ll i = 0; i < 3; i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	cout << min << " " << max;
}