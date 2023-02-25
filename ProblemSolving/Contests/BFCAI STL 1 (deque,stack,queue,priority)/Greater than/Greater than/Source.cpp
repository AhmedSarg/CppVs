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
            cout << -1 << "\n";
        else
        {
            i--;
            bool found = false;
            for (int j = i + 1; j < n; j++) {
                if (v[i] < v[j]) {
                    cout << j + 1 << "\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << -1 << "\n";
        }
    }
}