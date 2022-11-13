#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	int leftSize, rightSize;
	cin >> leftSize >> rightSize;
	int size = leftSize + rightSize + 1;
	string str;
	cin >> str;
	bool digits = true;
	if (str[leftSize] == '-') {
		for (int i = 0; i < leftSize; i++) {
			if (!isdigit(str.at(i))) {
				digits = false;
				break;
			}
		}
		for (int i = leftSize + 1; i < size; i++) {
			if (!isdigit(str.at(i))) {
				digits = false;
				break;
			}
		}
		if (digits == true) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	else {
		cout << "No" << endl;
	}
}