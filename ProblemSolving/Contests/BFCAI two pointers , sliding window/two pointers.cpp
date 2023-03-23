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
    int n;
    ll m;
    cin >> n >> m;
    vector<pair<int, ll>>v(n + 1);
    for1(i, n) {
        cin >> v[i].first;
        v[i].second = v[i - 1].second + v[i].first;
    }
    pair<int, ll>* n1 = &v[1];
    pair<int, ll>* n2 = &v[1];
    while (true) {
        if (n1 > n2) {
            cout << -1;
            break;
        }
        if (n2->second - (n1 - 1)->second == m) {
            cout << n2 - n1;
            break;
        }
        else if (n2->second - (n1 - 1)->second > m) {
            n1++;
        }
        else {
            n2++;
        }
    }
}