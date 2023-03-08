#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(int& n1, int& n2) {
    return n1 > n2;
}

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), cmp);
        int m = v[n - 1] + v[n - 2];
        if (m > d && v[0] > d)
            cout << "NO\n";
        else {
            cout << "YES\n";
        }
    }
}