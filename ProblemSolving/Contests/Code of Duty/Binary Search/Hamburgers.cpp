#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false);cout.precision(7);cout.setf(ios::fixed);cin.tie(NULL);
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

void printMap(map<int, int> mp) {
    map<int, int>::iterator itr;
    for(itr = mp.begin(); itr != mp.end(); itr++) {
        cout << itr->first << " " << itr->second << "\n";
    }
}

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    map<char, int> mp;
    string s;
    cin >> s;
    int maxNeeded = -1;
    for0(i, s.size()) {
        mp[s[i]]++;
        maxNeeded = max(maxNeeded, mp[s[i]]);
    }
    int nb, ns, nc, pb, ps, pc;
    cin >> nb >> ns >> nc >> pb >> ps >> pc;
    ll r;
    cin >> r;

    int l = 0, r = maxNeeded;
    while (l <= r) {
        int m = (l + r) / 2;
        if (m * mp['B'] <= nb && m * mp['S'] <= ns && m * mp['C'] <= nc) {
            nb -= mp['B'];
            ns -= mp['S'];
            nc -= mp['C'];
        }
    }

    int totalPrice = 0;
    if (mp['B'] > 0) {
        totalPrice += pb * mp['B'];
    }
    if (mp['S'] > 0) {
        totalPrice += ps * mp['S'];
    }
    if (mp['C'] > 0) {
        totalPrice += pc * mp['C'];
    }
    cout << r / totalPrice;
}