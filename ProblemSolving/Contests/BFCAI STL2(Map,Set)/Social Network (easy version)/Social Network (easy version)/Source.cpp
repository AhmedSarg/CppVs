#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, k;
    cin >> n >> k;
    deque<ll>dq;
    set<ll>st;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (dq.size() < k && st.find(x) == st.end())
        {
            dq.push_front(x);
            st.insert(x);
        }
        else if (dq.size() == k && st.find(x) == st.end()) {
            st.erase(dq.back());
            dq.pop_back();
            dq.push_front(x);
            st.insert(x);
        }
    }
    cout << dq.size() << "\n";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
}