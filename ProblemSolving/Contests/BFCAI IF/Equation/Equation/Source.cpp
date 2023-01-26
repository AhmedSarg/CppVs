#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string str;
	cin >> str;
	string a = "";
	string b = "";
	string c = "";
	int i = 0;
	while (str[i] != '+' && str[i] != '-' && str[i] != '*') {
		a += str[i];
		i += 1;
	}
	char s = str[i];
	bool eq = false;
	for (int j = i + 1; j < str.size(); j++) {
		if (str[j] == '=')
			eq = true;
		else if (eq == true)
			c += str[j];
		else
			b += str[j];
	}
	int ai = 0, bi = 0, ci = 0;
	for (int i = 0; i < a.size(); i++)
		ai += ((int)a[i] - 48) * pow(10, a.size() - 1 - i);
	for (int i = 0; i < b.size(); i++)
		bi += ((int)b[i] - 48) * pow(10, b.size() - 1 - i);
	for (int i = 0; i < c.size(); i++)
		ci += ((int)c[i] - 48) * pow(10, c.size() - 1 - i);
	int res = 0;
	switch (s) {
	case '+':
		res = ai + bi;
		break;
	case '-':
		res = ai - bi;
		break;
	case '*':
		res = ai * bi;
		break;
	}
	if (res == ci)
		cout << "Yes";
	else
		cout << res;
}