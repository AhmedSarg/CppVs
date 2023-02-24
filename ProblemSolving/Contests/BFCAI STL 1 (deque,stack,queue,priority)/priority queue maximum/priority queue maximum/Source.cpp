#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll q;
    cin >> q;
    priority_queue<ll>qmx;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            ll x;
            cin >> x;
            qmx.push(x);
        }
        else if (s == "pop") {
            qmx.pop();
        }
        else if (s == "top") {
            cout << qmx.top() << endl;
        }
    }
}