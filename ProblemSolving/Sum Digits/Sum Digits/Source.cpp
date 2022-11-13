#include <iostream>
#include <string>
using namespace std;

int main() {
	long long size;
	cin >> size;

	string str;
	cin >> str;

	int sum = 0;
	for (long long i = 0; i < size; i++) {
		sum += int(str[i]) - 48;
	}
	cout << sum;
}