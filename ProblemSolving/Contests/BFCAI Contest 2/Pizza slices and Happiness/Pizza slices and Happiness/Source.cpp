#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll n, k;
	cin >> n >> k;
	if (k % n == 0)
		cout << "Happy";
	else
		cout << "Not happy";
}