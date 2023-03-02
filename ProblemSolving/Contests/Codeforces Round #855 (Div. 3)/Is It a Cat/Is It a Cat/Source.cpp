#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char>v(n);
        string s = "";
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i != 0)
            {
                if (v[i] == v[i - 1] - 32 || v[i] == v[i - 1] + 32 || v[i] == v[i - 1])
                    continue;
            }
            s += v[i];
        }
        if (s.size() == 4 && (s[0] == 'm' || s[0] == 'M') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 'o' || s[2] == 'O') && (s[3] == 'w' || s[3] == 'W'))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}