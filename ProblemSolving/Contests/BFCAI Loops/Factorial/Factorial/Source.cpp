#include <iostream>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll fac = 1;
	for (int i = 1; i <= n; i++)
		fac *= i;
	cout << fac;
}