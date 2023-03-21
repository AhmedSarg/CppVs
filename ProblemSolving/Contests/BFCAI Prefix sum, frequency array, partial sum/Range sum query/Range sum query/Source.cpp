#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, q;
    cin >> n >> q;
    vector<pair<ll, ll>>v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i].first;
        v[i].second = v[i - 1].second + v[i].first;
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << v[r].second - v[l - 1].second << "\n";
    }
}