#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
	float n;
	cin >> n;
	double h = n / 3600.0;
	double hi;
	double hf = modf(h, &hi);
	double m = hf * 60;
	double mi;
	double mf = modf(m, &mi);
	double s = mf * 60;
	cout << fixed << setprecision(0) << hi << fixed << setprecision(0) << " " << mi << fixed << setprecision(0) << " " << s;
}