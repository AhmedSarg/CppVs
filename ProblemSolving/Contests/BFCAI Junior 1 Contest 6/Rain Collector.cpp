#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int x;
    cin >> x;
    int n = to_string(x).length();
    int sum = 0;
    for (int i = n; i > 0; i--) {
        sum += (x % (int)pow(10, i)) / (int)pow(10, i - 1);
    }
    int res = 0;
    for (int i = 0; i < 7; i++) {
        res += x + (sum * i);
    }
    cout << res;
}