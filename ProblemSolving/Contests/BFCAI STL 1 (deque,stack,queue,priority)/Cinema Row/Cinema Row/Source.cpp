#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<ll, ll>& l1, pair<ll, ll>& l2) {
    return l1.first > l2.first;
}

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    priority_queue<int>pql;
    priority_queue<int>pqr;
    stack<int>stk;
    vector<string>res(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        stk.push(x);
        pql.push(x);
        if (x == pql.top())
            res[i] += "left";
        else
            res[i] += "none";
    }
    for (int i = n - 1; i >= 0; i--) {
        int x = stk.top();
        stk.pop();
        pqr.push(x);
        if (x == pqr.top())
            if (res[i] == "left")
                res[i] = "both";
            else if (res[i] == "none")
                res[i] = "right";
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << "\n";
    }
}