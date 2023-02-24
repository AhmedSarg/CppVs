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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll spl = 0;
        if (v[0] != 1)
        {
            spl += v[0] - 1;
            v[0] = 1;
        }
        for (ll i = 0; i < n - 1; i++) {
            while (abs(v[i] - v[i + 1]) > 1)
            {
                v[i + 1]--;
                spl++;
            }
        }
        
        cout << spl << "\n";
    }
}