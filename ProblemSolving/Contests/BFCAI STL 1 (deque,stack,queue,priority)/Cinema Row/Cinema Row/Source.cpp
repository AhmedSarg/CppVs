#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll n;
    cin >> n;
    vector<ll>v(n);
    vector<string>res(n);
    deque<ll>q;
    deque<ll>qc;
    priority_queue<pair<ll, ll>>pq;
    priority_queue<pair<ll, ll>>pqc;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        q.push_back(v[i]);
        pq.push(make_pair(v[i], i));
    }
    for (int i = 0; i < n; i++) {
        if (i == 0)
        {
            res[pq.top().second] = "both";
            pq.pop();
        }
    }
    /*for (ll i = 0; i < n; i++) {
        qc = q;
        bool right = true;
        for (ll j = i + 1; j < n; j++)
            if (qc.back() > v[i])
                right = false;
            else
                qc.pop_back();
        bool left = true;
        for (int j = i - 1; j >= 0; j--)
            if (qc.front() > v[i])
                left = false;
            else
                qc.pop_front();
        if (left && right)
            cout << "both\n";
        else if (left && !right)
            cout << "left\n";
        else if (!left && right)
            cout << "right\n";
        else
            cout << "none\n";
    }*/
}