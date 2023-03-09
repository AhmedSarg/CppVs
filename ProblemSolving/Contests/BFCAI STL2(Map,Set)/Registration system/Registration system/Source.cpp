#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    map<string, int>mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (mp[s] == 0)
            cout << "OK\n";
        else
            cout << s << mp[s] << "\n";
        mp[s]++;
    }
}