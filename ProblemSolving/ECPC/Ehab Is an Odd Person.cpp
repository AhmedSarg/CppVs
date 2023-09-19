#include <bits/stdc++.h>
#define AltF4 ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AltF4;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int n;
    cin >> n;
    vector<ll>v(n);
    for0(i, n) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for0(i, n) {
        cout << v[i] << " ";
    }
}