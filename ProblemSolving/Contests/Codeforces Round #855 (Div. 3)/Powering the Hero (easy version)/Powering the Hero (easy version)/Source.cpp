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
        priority_queue<ll>pq;
        ll s = 0;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x == 0)
            {
                if (!pq.empty())
                {
                    s += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(x);
        }
        cout << s << "\n";
    }
}