#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, q;
    cin >> n >> q;
    map<string, ll>mp;
    for (int i = 0; i < n; i++) {
        string s;
        int m;
        cin >> s >> m;
        mp[s] = m;
    }
    while (q--) {
        int v;
        cin >> v;
        string x;
        if (v == 1) {
            int y;
            cin >> x >> y;
            mp[x] += y;
        }
        else if (v == 2) {
            cin >> x;
            cout << mp[x] << "\n";
        }
    }
}