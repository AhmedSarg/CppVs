#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        priority_queue<pair<int, int>>blocks;
        vector<pair<int, int>>v(n);
        vector<int>res(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
            blocks.push(v[i]);
        }
        int ind = 1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>towers;
        while (!blocks.empty()) {
            if (towers.size() < m) {
                towers.push(make_pair(blocks.top().first, ind));
                res[blocks.top().second] = ind++;
            }
            else {
                int tmp1 = towers.top().first + blocks.top().first;
                int tmp2 = towers.top().second;
                towers.pop();
                towers.push(make_pair(tmp1, tmp2));
                res[blocks.top().second] =tmp2;
            }
            blocks.pop();
        }
        int c1 = towers.top().first;
        while (towers.size() > 1)
            towers.pop();
        int c2 = towers.top().first;
        if (abs(c1 - c2) > x)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << res[i] << " ";
            cout << "\n";
        }
    }
}