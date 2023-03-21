#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, m;
    cin >> n >> m;
    vector<int>vn(m + 1, 0);
    vector<int>vp(m + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0)
        {
            string s = to_string(x);
            vn[stoi(s.substr(1, s.size()))]++;
        }
        else
            vp[x]++;
    }
    bool found = false;
    for (int i = m; i >= 1; i--) {
        if (vn[i] == 0) {
            cout << -i;
            found = true;
            break;
        }
    }
    if (!found) {
        for (int i = 0; i <= m; i++) {
            if (vp[i] == 0)
                cout << i;
        }
    }
}