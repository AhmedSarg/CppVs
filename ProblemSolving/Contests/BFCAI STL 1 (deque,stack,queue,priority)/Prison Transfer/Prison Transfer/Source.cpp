#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll n, t, c;
    cin >> n >> t >> c;
    vector<ll>q(n);
    ll way = 0;
    for (ll i = 0; i < n; i++) {
        cin >> q[i];
    }
    for (ll i = 0; i < n - c + 1; i++) {
        bool co = true;
        for (ll j = i; j < i + c; j++)
        {
            if (q[j] > t)
            {
                co = false;
            }
        }
        if (co)
            way++;
    }
    cout << way;
}