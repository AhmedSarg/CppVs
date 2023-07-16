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
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> res;
    for1 (i, n) {
        if (i % 2 != 0)
            res.push_front(s[i - 1]);
        else
            res.push_back(s[i - 1]);
    }
    if (n % 2 != 0) {
        for0 (i, n) {
            cout << res.back();
            res.pop_back();
        }
    }
    else {
        for0 (i, n) {
            cout << res.front();
            res.pop_front();
        }
    }
}