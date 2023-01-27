#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	float* res = new float[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		res[i] = (float)x / 2.0;
	}
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(1) << res[i] << endl;
}