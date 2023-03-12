#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int d;

bool cmp(pair<ll, int>& p1, pair<ll, int>& p2) {
    if (abs(p2.second - p1.second) == d)
    {
        if (p1.second > p2.second && p1.first < p2.first)
            swap(p1.second, p2.second);
        return (p1.first < p2.first);
    }
    return false;
}

bool cmp2(pair<ll, int>& p1, pair<ll, int>& p2) {
    return p1.second < p2.second;
}

int main() {
    AhmedSarg;
    int n;
    cin >> n >> d;
    vector<pair<ll, int>>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end(), cmp);
    sort(v.begin(), v.end(), cmp2);
    if (is_sorted(v.begin(), v.end()))
        cout << "YES";
    else
        cout << "NO";
}