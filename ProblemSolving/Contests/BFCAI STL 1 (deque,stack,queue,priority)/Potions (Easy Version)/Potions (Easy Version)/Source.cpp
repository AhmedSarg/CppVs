#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll n;
    cin >> n;
    ll h = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (h + x > 0)
        {
            h += x;
            d++;
        }
    }
    cout << d;
}