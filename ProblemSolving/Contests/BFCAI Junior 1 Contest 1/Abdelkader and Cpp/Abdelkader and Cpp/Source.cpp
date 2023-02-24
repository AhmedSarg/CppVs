#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    int c = 0;
    string sc = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ';')
            sc += s[i];
        else {
            if (sc == "c++" || sc == "++c")
            {
                c++;
                sc = "";
            }
            else if (sc == "c--" || sc == "--c")
            {
                c--;
                sc = "";
            }
            else if (sc[1] == '=')
            {
                c = sc[2] - 48;
                sc = "";
            }
        }
    }
    cout << c;
}