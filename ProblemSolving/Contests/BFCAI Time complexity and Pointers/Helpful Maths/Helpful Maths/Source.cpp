#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    vector<char>v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+')
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << "+";
    }
    cout << v[v.size() - 1];
}