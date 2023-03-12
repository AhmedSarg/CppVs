#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<double, int>mp;
        vector<double>ms(n);
        double s = 0;
        for (int i = 0; i < n; i++) {
            cin >> ms[i];
            s += ms[i];
        }
        ll res = 0;
        double mean = (s * 2) / n;
        for (auto it : ms) {
            res += mp[mean - it];
            mp[it]++;
        }
        cout << res << "\n";
    }
}