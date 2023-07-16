#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (ll i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

bool cmp (pair<string, int>& n1, pair<string, int>& n2) {
    if (n1.second != n2.second)
        return n1.second > n2.second;
    else
        return n1.first < n2.first;
}

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int n;
    cin >> n;
    vector<ll> v(n);
    ll score = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        score += v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        score += v[i] * (i + 1);
    }
    score -= v[n - 1];
    cout << score;
}