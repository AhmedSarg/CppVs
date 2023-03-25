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
    vector<pair<ll, ll>>v(n);
    for0(i, n) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int l = 0, r = 0;
    ll ans = 0, sum = 0;
    while (r < n && l <= r) {
        while (v[r].first - v[l].first >= m) {
            ans = max(sum, ans);
            sum -= v[l].second;
            l++;
        }
        sum += v[r].second;
        r++;
    }
    ans = max(ans, sum);
    cout << ans;
}