#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    int n = s.size();
    vector<int>v(n);
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
        if (s[i] == '3' && s[i - 1] == '1')
            v[i]++;
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
            cout << v[r] << "\n";
        else
        {
            if (v[l] - v[l - 1] >= 1)
                cout << v[r] - v[l - 1] - 1 << "\n";
            else
                cout << v[r] - v[l - 1] << "\n";
        }
    }
}