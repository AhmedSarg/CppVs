#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string* res = new string[n];
	for (int i = 0; i < n; i++) {
		string val = "NO";
		int n1, n2, n3, n4;
		cin >> n1 >> n2 >> n3 >> n4;
		for (int j = 0; j < 4; j++) {
			if (n1 <= n2 && n1 <= n3 && n3 <= n4 && n2 <= n4) {
				val = "YES";
				break;
			}
			else {
				int no1 = n1;
				int no2 = n2;
				int no3 = n3;
				int no4 = n4;
				n1 = no3;
				n2 = no1;
				n4 = no2;
				n3 = no4;
			}
		}
		res[i] = val;
	}
	for (int i = 0; i < n; i++) {
		cout << res[i] << endl;
	}
}