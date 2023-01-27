#include <iostream>
#include <math.h>
using namespace std;

int main() {
	string str[8];
	int ki, qi, kj, qj;
	for (int i = 0; i < 8; i++) {
		cin >> str[i];
		for (int j = 0; j < 8; j++) {
			if (str[i][j] == 'K') {
				ki = i;
				kj = j;
			}
			if (str[i][j] == 'Q') {
				qi = i;
				qj = j;
			}
		}
	}
	if (qi == ki || qj == kj || abs(ki - qi) == abs(kj - qj)) {
		cout << "Checkmate";
	}
	else
		cout << "Play";
}