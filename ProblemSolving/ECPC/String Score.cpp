#include <iostream>
#include<vector>
#define AltF4 ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (ll i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AltF4;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    ll n;
    cin >> n;
    vector<char>v(n);
    ll res = 0;
    bool skip = false;
    for0 (i,n) {
        cin >> v[i];
    }
    for0(i, n) {
        if (skip) {
            skip = false;
        }
        else {
            if (v[i] == 'V')res += 5;
            else if (v[i] == 'W')res += 2;
            else if (v[i] == 'X' && i != n - 1)skip = true;
            else if (v[i] == 'Y' && i != n - 1) {
                v.push_back(v[i + 1]);
                n++;
                skip = true;
            }
            else if (v[i] == 'Z' && i != n - 1) {
                if (v[i + 1] == 'V') {
                    res /= 5;
                    skip = true;
                }
                if (v[i + 1] == 'W') {
                    res /= 2;
                    skip = true;
                }
            }
        }
    }
    cout << res << endl;
}