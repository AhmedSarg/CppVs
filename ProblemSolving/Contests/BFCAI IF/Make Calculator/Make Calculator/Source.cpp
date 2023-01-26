#include <iostream>
using namespace std;

long long power(int x, int y) {
	long long sum = 1;
	for (int i = 1; i <= y; i++)
		sum *= x;
	return sum;
}

int main() {
	string str, a, b;
	char s;
	bool op = false;
	int ai = 0, bi = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			s = str[i];
			op = true;
		}
		else {
			if (op == false) {
				a += str[i];
			}
			else {
				b += str[i];
			}
		}
	}
	for (int i = 0; i < a.size(); i++) {
		ai += ((int)a[i] - 48) * power(10, a.size() - 1 - i);
	}
	for (int i = 0; i < b.size(); i++) {
		bi += ((int)b[i] - 48) * power(10, b.size() - 1 - i);
	}
	switch (s) {
	case '+':
		cout << ai + bi;
		break;
	case '-':
		cout << ai - bi;
		break;
	case '*':
		cout << ai * bi;
		break;
	case '/':
		cout << ai / bi;
		break;
	}
}