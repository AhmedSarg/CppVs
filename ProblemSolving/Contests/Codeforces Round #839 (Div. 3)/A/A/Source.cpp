#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* res = new int[n];
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int n1 = (int)str[0] - 48;
		int n2 = (int)str[2] - 48;
		res[i] = n1 + n2;
	}
	for (int i = 0; i < n; i++)
		cout << res[i] << endl;
}