#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float n;
	cin >> n;
	double i, f;
	f = modf(n, &i);
	if (f == 0.0)
		cout << "int";
	else
		cout << "float";
}