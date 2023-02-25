#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, m;
    cin >> n >> m;
    priority_queue<ll>pq;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        pq.push(x);
    }
    for (int i = 0; i < m; i++) {
        ll x = pq.top();
        pq.pop();
        x /= 2;
        pq.push(x);
    }
    ll sum = 0;
    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    cout << sum;
}