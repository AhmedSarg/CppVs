#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    ll n;
    cin >> n;
    ll sum = 0;
    priority_queue<ll, vector<ll>, greater<ll>>pq;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        pq.push(x);
        while (sum < 0) {
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size();
}