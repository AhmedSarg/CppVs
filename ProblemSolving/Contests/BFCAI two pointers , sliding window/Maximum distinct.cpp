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
    int n, k, cnt = 0, mx = 0;
    string s;
    cin >> n >> k >> s;
    map<char, int>mp;
    for0(i, k) {
        mp[s[i]]++;
    }
    mx = mp.size();
    cnt = mp.size();
    int l = 0;
    int r = k;
    while (r < n) {
        if (!mp[s[r]])cnt++;
        mp[s[r]]++;
        r++;
        mp[s[l]]--;
        if (!mp[s[l]])cnt--;
        l++;
        mx = max(mx, cnt);
    }
    cout << mx;
}