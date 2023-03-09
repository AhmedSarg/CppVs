#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, m;
    cin >> n >> m;
    map<string, string>mp;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s2 + ';'] = s1;
    }
    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << s1 << " " << s2 << " #" << mp[s2] << "\n";
    }
}