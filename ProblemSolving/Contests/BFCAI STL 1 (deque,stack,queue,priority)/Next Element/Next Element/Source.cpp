#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

class monotonic_stack {
private:
    stack<pair<ll, int>>s;
public:
    void push(pair<ll, int> x) {
        if (!s.empty())
            while (s.top().first < x.first)
            {
                s.pop();
                if (s.empty())
                    break;
            }
        s.push(x);
    }
    pair<ll, int> pop() {
        pair<ll, int> tmp = s.top();
        s.pop();
        return tmp;
    }
    pair<ll, int> top() {
        return s.top();
    }
    bool empty() {
        if (s.empty())
            return true;
        else
            return false;
    }
};

int main() {
    AhmedSarg;

    int n;
    cin >> n;
    vector<int>res(n, -1);
    monotonic_stack st;

    for (int i = 0; i < n; i++)
    {
        ll x;
        int y;
        cin >> x;
        y = i + 1;
        pair<ll, int> v = make_pair(x, y);
        if (i == n - 1)
            res[i] = -1;
        if (!st.empty())
            while (st.top().first < v.first)
            {
                res[st.top().second - 1] = v.second;
                st.pop();
                if (st.empty())
                    break;
            }
        st.push(v);
    }
    int q;
    cin >> q;
    while (q--) {
        int i;
        cin >> i;
        i--;
        if (res[i] != -1)
            cout << res[i] << "\n";
        else
            cout << -1 << "\n";
    }
}