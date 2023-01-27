#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll arr[3] = { a, b, c };
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] > arr[j]) {
				ll tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	cout << arr[0] << " " << arr[1] << " " << arr[2];
}