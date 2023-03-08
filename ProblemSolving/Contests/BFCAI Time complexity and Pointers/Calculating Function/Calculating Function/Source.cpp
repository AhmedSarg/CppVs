#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll n;
    cin >> n;
    ll s = 0;
    for (ll i = 1; i < n; i+=2) {
        s -= i;
        s += i + 1;
    }
    if (n % 2 != 0)
        s -= n;
    cout << s;
}