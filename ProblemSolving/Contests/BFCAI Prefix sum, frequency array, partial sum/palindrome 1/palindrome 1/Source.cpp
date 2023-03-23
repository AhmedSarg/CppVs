#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    int n = s.size();
    int odds = 0;
    vector <int>v(26);
    for (int i = 0; i < n; i++) {
        if (v[s[i] - 97] % 2 != 0)
            odds--;
        else
            odds++;
        v[s[i] - 97]++;
    }
    if (odds <= 1)
        cout << "YES";
    else
        cout << "NO";
}