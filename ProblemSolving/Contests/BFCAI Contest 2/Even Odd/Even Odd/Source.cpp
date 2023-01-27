#include <iostream>
#define ll long long
using namespace std;

ll power(int x, int y) {
	ll prod = 1;
	for (int i = 0; i < y; i++)
		prod *= x;
	return prod;
}

int main() {
	int n;
	cin >> n;
	if (n % 2 == 0)
		cout << power(n, 2) % 99;
	else
		cout << power(n, 3) % 100;
}