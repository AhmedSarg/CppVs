#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll q;
    cin >> q;
    stack<ll>st;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            ll x;
            cin >> x;
            st.push(x);
        }
        else if (s == "pop") {
            st.pop();
        }
        else if (s == "top") {
            cout << st.top() << endl;
        }
    }
}