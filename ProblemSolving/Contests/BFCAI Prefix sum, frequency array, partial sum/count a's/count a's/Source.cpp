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
    for (int i = 0; i < n; i++) {
        if (i != 0)
            v[i] = v[i - 1];
        if (s[i] == 'a')
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
            cout << v[r] - v[l - 1] << "\n";
    }
}