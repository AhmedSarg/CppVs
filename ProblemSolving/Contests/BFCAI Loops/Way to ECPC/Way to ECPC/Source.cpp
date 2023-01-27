#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int s, v;
		cin >> s >> v;
		cout << fixed << setprecision(6) << s * v / 0.06 << endl;
	}
}