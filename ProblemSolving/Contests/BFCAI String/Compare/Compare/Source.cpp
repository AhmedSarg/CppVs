#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string x, y;
	cin >> x >> y;
	int sx = 0, sy = 0;
	string arr[2] = { x, y };
	sort(arr, arr + 2);
	cout << arr[0];
}