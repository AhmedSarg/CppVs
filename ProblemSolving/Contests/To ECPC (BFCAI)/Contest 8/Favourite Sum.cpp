#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false);cout.precision(7);cout.setf(ios::fixed);cin.tie(NULL);
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
        ll sum = x * (x + 1) / 2;
        vector<ll>v(n);
        for0(i, n) {
            cin >> v[i];
            if (v[i] <= x)
                sum -= v[i] * 2;
        }
        cout << sum << "\n";
    }
}