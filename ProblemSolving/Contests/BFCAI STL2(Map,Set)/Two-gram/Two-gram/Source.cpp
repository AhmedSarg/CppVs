#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int>mp;
    vector<pair<string, int>>v;
    int max = 0;
    string p = s.substr(0, 2);
    for (int i = 0; i < n - 1; i++) {
        mp[s.substr(i, 2)] += 1;
        if (mp[s.substr(i, 2)] > max) {
            max = mp[s.substr(i, 2)];
            p = s.substr(i, 2);
        }
    }
    cout << p;
}