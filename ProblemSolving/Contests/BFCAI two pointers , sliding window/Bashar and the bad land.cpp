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
    ll m;
    cin >> n >> m;
    vector<int>v(n);
    for (auto& it : v) cin >> it;
    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;
    while (r < n && l <= r) {
        sum += v[r];
        while (sum >= m) {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (ans == INT_MAX)
        ans = -1;
    cout << ans;
}