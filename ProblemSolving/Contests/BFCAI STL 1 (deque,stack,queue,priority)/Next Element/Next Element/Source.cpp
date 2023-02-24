#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--) {
        int i;
        cin >> i;
        if (i >= n)
            cout << -1 << endl;
        else
        {
            bool found = false;
            for (int j = i; j <= n; j++) {
                if (v[i - 1] < v[j]) {
                    cout << j + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << -1 << endl;
        }
    }
}