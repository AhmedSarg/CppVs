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
    ll n;
    cin >> n;
    bitset<48> b(n);
    string s = b.to_string();
    int mx = 0;
    int cons = 0;
    for0 (i, 48) {
        if (s[i] == '1')
            cons++;
        else {
            mx = max(cons, mx);
            cons = 0;
        }
    }
    mx = max(cons, mx);
    cout << mx ;
}