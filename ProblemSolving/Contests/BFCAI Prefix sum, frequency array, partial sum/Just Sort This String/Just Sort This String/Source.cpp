#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for(int i=0;i<n;i++)
using namespace std;

map<char, int>mp;
bool cmp(char& c1, char& c2) {
    return mp[c1] < mp[c2];
}

int main() {
    AhmedSarg;
    string o;
    cin >> o;
    string s;
    cin >> s;
    for0(i, o.size())
        mp[o[i]] = i;
    sort(s.begin(), s.end(), cmp);
    cout << s;
}