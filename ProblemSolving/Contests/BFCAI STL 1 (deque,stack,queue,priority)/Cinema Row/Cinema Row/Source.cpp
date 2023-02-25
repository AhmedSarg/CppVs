#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<ll, ll>& l1, pair<ll, ll>& l2) {
    return l1.first > l2.first;
}

int main() {
    AhmedSarg;
    ll n;
    cin >> n;
    vector<ll>v(n);
    deque<ll>dq;
    deque<ll>dqc;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        dq.push_back(v[i]);
    }
    for (ll i = 0; i < n; i++) {
        dqc = dq;
        bool left = true;
        for (ll j = 0; j < i; j++) {
            if (dqc.front() <= v[i])
                dqc.pop_front();
            else
                left = false;
        }
        bool right = true;
        for (ll j = n - 1; j > i; j--) {
            if (dqc.back() <= v[i])
                dqc.pop_back();
            else
                right = false;
        }
        if (left && right)
            cout << "both\n";
        else if (left && !right)
            cout << "left\n";
        else if (!left && right)
            cout << "right\n";
        else
            cout << "none\n";
    }
}