#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll>>v1(n + 1);
    vector<ll>v2(m);
    for1(i, n) {
        cin >> v1[i].first;
        v1[i].second = v1[i - 1].second + v1[i].first;
    }
    for0(i, m) {
        cin >> v2[i];
    }
    int l = 0;
    for1(i, n) {
        for (l; l < m; l++) {
            if (v2[l] <= v1[i].second) {
                cout << i << " " << v2[l] - v1[i - 1].second << "\n";
            }
            else
                break;
        }
    }
}