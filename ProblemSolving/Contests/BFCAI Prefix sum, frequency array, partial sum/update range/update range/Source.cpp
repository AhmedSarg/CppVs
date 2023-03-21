#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, q;
    cin >> n >> q;
    vector<ll>v(n + 1);
    vector<ll>par(n + 2);
    vector<ll>pre(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    while (q--) {
        int l, r;
        ll val;
        cin >> l >> r >> val;
        par[l] += val;
        par[r + 1] += -val;
    }
    for (int i = 1; i <= n; i++) {
        pre[i] = par[i] + pre[i - 1];
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] + pre[i] << " ";
}