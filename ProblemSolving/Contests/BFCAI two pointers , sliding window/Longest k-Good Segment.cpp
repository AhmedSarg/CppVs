#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (ll i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    for0(i, n) {
        cin >> v[i];
    }
    ll l = 0, r = 0, ans = 0;
    ll maxl = 1, maxr = n;
    map<ll, ll>mp;
    while (r < n && l <= r) {
        mp[v[r]]++;
        while (mp.size() > k) {
            if (r - l + 1 > ans) {
                maxl = l + 1;
                maxr = r;
                ans = r - l + 1;
            }
            mp.erase(v[l]);
            l++;
        }
        r++;
    }
    cout << maxl << " " << maxr;
}