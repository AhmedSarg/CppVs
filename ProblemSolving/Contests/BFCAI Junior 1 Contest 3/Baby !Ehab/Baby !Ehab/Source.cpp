#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    freopen("equal.in", "r", stdin);
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        set<int>st;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            st.insert(x);
        }
        if (st.size() != 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}