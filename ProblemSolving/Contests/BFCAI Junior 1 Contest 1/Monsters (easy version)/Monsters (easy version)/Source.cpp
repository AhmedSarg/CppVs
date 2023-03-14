#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>v(n);
        ll spell = 0;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] > 1)
        {
            spell += v[0] - 1;
            v[0] = 1;
        }
        ll tmp = 1;
        for (ll i = 1; i < n; i++) {
            if (v[i] - tmp > 1)
            {
                spell += v[i] - tmp - 1;
                v[i] = tmp + 1;
            }
            tmp = v[i];
        }
        cout << spell << "\n";
    }
}