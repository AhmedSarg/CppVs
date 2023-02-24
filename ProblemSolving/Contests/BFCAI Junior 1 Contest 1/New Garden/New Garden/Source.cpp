#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
    return (p1.first > p2.first);
}

int main() {
    AhmedSarg;
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end(), cmp);
    ll b = 0;
    int i = 0;
    while (m && n) {
        if (m > v[i].second)
        {
            b += (v[i].first * v[i].second);
            m -= v[i].second;
            if (--n)
                i++;
        }
        else {
            b += v[i].first * m;
            m = 0;
        }
    }
    cout << b;
}