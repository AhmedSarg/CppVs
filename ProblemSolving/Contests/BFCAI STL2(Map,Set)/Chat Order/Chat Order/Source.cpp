#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<string, int>& p1, pair<string, int>& p2) {
    return p1.second > p2.second;
}

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    map<string, int>m;
    vector<pair<string, int>>v;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        m[s] = i;
    }
    for (auto i : m) {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << "\n";
    }
}