#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, s, r;
		cin >> n >> s >> r;
		int* dice = new int[n];
		dice[0] = s - r;
		int big = s - r;
		if (r > big)
			dice[1] = big;
		if (n - 2 == r - big) {
			for (int i = 2; i < n; i++) {
				dice[i] = 1;
			}
		}
		cout << s - r << endl;
	}
}