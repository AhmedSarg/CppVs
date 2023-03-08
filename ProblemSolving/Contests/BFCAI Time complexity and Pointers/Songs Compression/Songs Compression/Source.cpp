#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<ll, ll>& p1, pair<ll, ll>& p2) {
    return (p1.first - p1.second) > (p2.first - p2.second);
}

int main() {
    AhmedSarg;
    int n, res = 0;
    ll m, s = 0;
    cin >> n >> m;
    vector<pair<ll, ll>>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        s += v[i].first;
    }
    sort(v.begin(), v.end(), cmp);
    int i = 0;
    while (s > m && i < n) {
        s -= v[i].first;
        s += v[i].second;
        i++;
        res++;
    }
    if (s > m)
        cout << -1;
    else
        cout << res;
}