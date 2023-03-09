#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    set<string>big;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        set<char>small;
        for (int j = 0; j < s.size(); j++)
            small.insert(s[j]);
        s = "";
        for (auto it : small)
            s += it;
        big.insert(s);
    }
    cout << big.size();
}