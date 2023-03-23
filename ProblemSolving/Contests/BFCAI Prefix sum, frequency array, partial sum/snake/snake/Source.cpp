#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        if (i != 0)
            v[i] += v[i - 1];
        if (s[i] == 'X')
            v[i]++;
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l > r)
            swap(l, r);
        if (l == 0)
            cout << v[r] << "\n";
        else
            cout << v[r] - v[l - 1] << "\n";
    }
}