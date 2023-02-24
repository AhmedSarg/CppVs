#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool used = true;
        while (used) {
            used = false;
            sort(v.begin(), v.end());
            if (v[n - 1] > v[0] + v[1])
            {
                v[n - 1] = v[0] + v[1];
                used = true;
            }
        }
        bool done = true;
        for (int i = 0; i < n; i++) {
            if (v[i] > d)
            {
                done = false;
                break;
            }
        }
        if (done)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}