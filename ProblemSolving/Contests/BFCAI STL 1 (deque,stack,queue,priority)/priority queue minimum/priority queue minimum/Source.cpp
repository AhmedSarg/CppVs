#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll q;
    cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>>qmn;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            ll x;
            cin >> x;
            qmn.push(x);
        }
        else if (s == "pop") {
            qmn.pop();
        }
        else if (s == "top") {
            cout << qmn.top() << "\n";
        }
    }
}