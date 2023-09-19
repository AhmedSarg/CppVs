#include <bits/stdc++.h>
#define AltF4 ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
    return p1.first > p2.first;
}

int main() {
    AltF4;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for0(i, n) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end(), cmp);
    int res = 0;
    for0 (i, n) {
        res += v[i].first * i + 1;
    }
    cout << res << "\n";
    for0 (i, n) {
        cout << v[i].second << " ";
    }
}