#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll a, b;
	cin >> a >> b;
	if (a > 0 && b > 0)
		cout << "Positive";
	else if ( a < 0 && b < 0 )
		cout << "Negative";
	else if ( ( a < 0 && b > 0 ) || a == 0 || b == 0 )
		cout << "Zero";
	/*ll prod = 1;
	while (a != b + 1) {
		prod *= a;
		a += 1;
	}
	if (prod < 0)
		cout << "Negative";
	else if (prod > 0)
		cout << "Positive";
	else if (prod == 0)
		cout << "Zero";*/
}