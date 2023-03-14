#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<int, double>& p1, pair<int, double>& p2) {
    return p1.second > p2.second;
}

int main() {
    AhmedSarg;
    int n;
    double t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    t1 *= ((100.0 - k) / 100.0);
    vector<pair<int, double>>res(n);
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        res[i].first = i + 1;
        res[i].second = (min(t1, t2) * min(x, y)) + (max(t1, t2) * max(x, y));
    }
    sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(0) << res[i].first << " " << fixed << setprecision(2) << res[i].second << "\n";
    }
}