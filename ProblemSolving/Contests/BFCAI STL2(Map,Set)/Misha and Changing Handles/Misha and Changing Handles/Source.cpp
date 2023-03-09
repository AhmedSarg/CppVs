#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int q;
    cin >> q;
    map<string, string>mp;
    int ch = 0;
    while (q--) {
        string o, n;
        cin >> o >> n;
        auto old = mp.find(o);
        if (old != mp.end()) {
            mp.insert({n, old->second});
            mp.erase(old);
        }
        else {
            mp[n] = o;
        }
    }
    cout << mp.size() << "\n";
    for (auto it : mp)
        cout << it.second << " " << it.first << "\n";
}