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
    int ch = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == s[i - 1] || s[i] == s[i + 1]) {
            s.erase(s.begin() + i);
            ch++;
            i--;
            n--;
        }
    }
    if (s.size() == 2 && s[0] == s[1])
    {
        ch++;
    }
    cout << ch;
}