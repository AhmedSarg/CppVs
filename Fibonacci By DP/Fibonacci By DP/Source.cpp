#include <iostream>
using namespace std;

int fib(int n, int* dp) {
	if (n <= 1)
		return n;
	if (dp[n - 1] != -1 && dp[n - 2] != -1)
		return dp[n - 1] + dp[n - 2];
	else if (dp[n - 1] != -1 && dp[n - 2] == -1)
		return dp[n - 1] + fib(n - 2, dp);
	else if (dp[n - 1] == -1 && dp[n - 2] != -1)
		return fib(n - 1, dp) + dp[n - 2];
	else
		return fib(n - 1, dp) + fib(n - 2, dp);
}

int main() {
	int t;
	cin >> t;
	int maxn = 0;
	int* ns = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> ns[i];
		if (ns[i] > maxn)
			maxn = ns[i];
	}
	int* dp = new int[maxn];
	for (int i = 0; i < t; i++)
		fib(ns[i], dp);
}