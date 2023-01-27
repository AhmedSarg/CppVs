#include <iostream>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	ll a, b, c;
	cin >> a >> b >> c;
	/*while (a < c)
		a += b;
	if (a == c)
		cout << "YES";
	else
		cout << "NO";*/
	if ((c - a) % b == 0)
		cout << "YES";
	else
		cout << "NO";
}