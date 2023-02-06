#include <iostream>
#include <algorithm>
using namespace std;

int f(string s, int n) {
	char* arr = new char[n];
	for (int i = 0; i < n; i++)
		arr[i] = s[i];
	sort(arr, arr + n);
	int res = 0;
	for (int i = 0; i < n - 1; i++) {
		res += 1;
		while (arr[i] == arr[i + 1] && i < n)
			i += 1;
	}
	if (arr[n - 1] != arr[n - 2])
		res += 1;
	return res;
}

int brute(string s, int n, int mark, int max) {
	string s1, s2;
	int n1 = 0, n2 = 0;
	for (int i = 0; i < mark; i++) {
		s1 += s[i];
		n1 += 1;
	}
	for (int i = mark; i < n; i++) {
		s2 += s[i];
		n2 += 1;
	}
	int f1 = f(s1, n1);
	int f2 = f(s2, n2);
	int f = f1 + f2;
	if (f >= max)
		max = f;
	if (mark + 1 != n)
		brute(s, n, mark + 1, max);
	return max;
}

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int max = 0, mark = 1;
		do {
			string s1, s2;
			int n1 = 0, n2 = 0;
			for (int i = 0; i < mark; i++) {
				s1 += s[i];
				n1 += 1;
			}
			for (int i = mark; i < n; i++) {
				s2 += s[i];
				n2 += 1;
			}
			int f1 = f(s1, n1);
			int f2 = f(s2, n2);
			int f = f1 + f2;
			if (f >= max)
				max = f;
			mark += 1;
		} while (mark != n);
		cout << max << endl;
		//cout << brute(s, n, 1, 0) << endl;
	}
}