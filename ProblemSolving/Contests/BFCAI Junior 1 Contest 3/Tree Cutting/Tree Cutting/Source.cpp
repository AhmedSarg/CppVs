#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<ll, ll>& p1, pair<ll, ll>& p2) {
    return p1.second > p2.second;
}

int main() {
    AhmedSarg;
    int n, k;
    ll h;
    cin >> n >> k >> h;
    vector<pair<ll, ll>>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = abs(h - v[i].first);
    }
    sort(v.begin(), v.end(), cmp);
    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[v.size() - 1].second;
        v.pop_back();
    }
    cout << sum;
}