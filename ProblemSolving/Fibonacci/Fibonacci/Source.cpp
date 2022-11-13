#include <iostream>
using namespace std;

int main() {
	long long num, t1 = 0, t2 = 1, nextTerm = 0, res = 0;
	cin >> num;
	nextTerm = t1 + t2;
	if (num == 1) {
		res = 0;
	}
	else if (num == 2) {
		res = 1;
	}
	else {
		num--;
		while (--num) {
			res = nextTerm;
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	}
	
	cout << res;
}