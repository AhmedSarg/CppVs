#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<pair<ll, ll>>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            if (i == 0)
                v[i].second = v[i].first;
            else
                v[i].second = v[i].first + v[i - 1].second;
        }
        while (q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;
            l--;
            r--;
            ll sum;
            if (l == 0)
                sum = v[n - 1].second - v[r].second + (k * (r + 1));
            else
                sum = v[l - 1].second + v[n - 1].second - v[r].second + (k * (r - l + 1));
            if (sum % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}