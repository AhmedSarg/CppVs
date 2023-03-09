#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, k;
    cin >> n >> k;
    multiset<ll>ms;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    int j = 0;
    ll ol = -1, ne = -1;
    for (auto i : ms) {
        j++;
        if (j == k)
            ol = i;
        else if (j == k + 1)
            ne = i;
    }
    ll i = ol;
    while (ne - i < 1 && i < ne)
        i++;
    if (ne - i >= 1 && ne - i <= pow(10, 9) && i < ne)
        cout << i;
    else
        cout << -1;
}