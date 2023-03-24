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
    int n, m;
    cin >> n >> m;
    int j = 0;
    vector<ll>v(n);
    for0(i, n) {
        cin >> v[i];
    }
    int c = 0;
    for0(i, m) {
        ll x;
        cin >> x;
        for (j; j < n; j++) {
            if (v[j] < x)
                c++;
            else
                break;
        }
        cout << c << " ";
    }
}