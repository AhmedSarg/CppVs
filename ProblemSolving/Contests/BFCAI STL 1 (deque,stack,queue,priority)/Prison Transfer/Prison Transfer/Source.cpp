#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll n, t, c;
    cin >> n >> t >> c;
    //queue<ll>q;
    ll way = 0;
    ll cont = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x <= t)
            cont++;
        else if (x > t && cont >= c)
        {
            way += cont - c + 1;
            cont = 0;
        }
        else
            cont = 0;
    }
    if (cont >= c)
        way += cont - c + 1;
    cout << way;
}