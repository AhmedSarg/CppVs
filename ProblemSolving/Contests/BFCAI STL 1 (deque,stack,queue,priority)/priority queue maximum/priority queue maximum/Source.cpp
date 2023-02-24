#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(ll& l1, ll& l2) {
    return l1 > l2;
}

int main() {
    AhmedSarg;
    ll q;
    cin >> q;
    vector<ll>qmx;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            ll x;
            cin >> x;
            qmx.push_back(x);
            sort(qmx.begin(), qmx.end());
        }
        else if (s == "pop") {
            qmx.pop_back();
        }
        else if (s == "top") {
            cout << qmx[0] << "\n";
        }
    }
}