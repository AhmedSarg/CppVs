#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

bool cmp(pair<string, int>& s1, pair<string, int>& s2) {
    if (s1.first[s1.first.size() - 1] == s2.first[s2.first.size() - 1]) {
        return s1.second < s2.second;
    }
    return s1.first[s1.first.size() - 1] < s2.first[s2.first.size() - 1];
}

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int n;
    cin >> n;
    vector<pair<string, int>>v(n);
    for0(i, n) {
        cin >> v[i].second;
        v[i].first = to_string(v[i].second);
    }
    sort(v.begin(), v.end(), cmp);
    for0(i, n) {
        cout << v[i].second << " ";
    }
}