#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	string z = "";
	for (int i = 0; i < 4 - str.size(); i++)
		z += '0';
	cout << z << str;
}