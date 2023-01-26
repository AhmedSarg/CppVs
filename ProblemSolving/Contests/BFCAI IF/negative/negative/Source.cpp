#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll max = -LLONG_MAX;
	ll arr[3] = { a, b, c };
	for (int i = 0; i < 3; i++) {
		if (arr[i] < 0 && arr[i] > max)
			max = arr[i];
	}
	cout << max;
}