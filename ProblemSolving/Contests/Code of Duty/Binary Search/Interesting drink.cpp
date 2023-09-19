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
    ll n;
    int k;
    cin >> n >> k;
    ll l = 0, r = n;
    ll last = LLONG_MAX;
    while (l <= r) {
        ll m = (l + r) / 2;
        ll i = 0;
        ll sum = 0;
        bool failed = false;
        while (sum < n) {
            ll cof = m / pow(k, i);
            sum += cof;
            if (cof == 0 && sum < n) {
                failed = true;
                break;
            }
            i++;
        }
        if (failed)
            l = m + 1;
        else {
            r = m - 1;
            last = min(last, m);
        }
    }
    cout << last;
}