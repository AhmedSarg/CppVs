#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    set<ll>st;
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        ll x;
        if (s == "insert") {
            cin >> x;
            st.insert(x);
        }
        else if (s == "find") {
            cin >> x;
            if (st.find(x) == st.end())
                cout << "not found\n";
            else
                cout << "found\n";
        }
        else if (s == "lower_bound") {
            cin >> x;
            if (st.lower_bound(x) == st.end())
                cout << -1 << "\n";
            else
                cout << *st.lower_bound(x) << "\n";
        }
        else if (s == "upper_bound") {
            cin >> x;
            if (st.upper_bound(x) == st.end())
                cout << -1 << "\n";
            else
                cout << *st.upper_bound(x) << "\n";
        }
    }
}