#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for(int i=0;i<n;i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sf = 0, fs = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'S' && s[i + 1] == 'F')
            sf++;
        else if (s[i] == 'F' && s[i + 1] == 'S')
            fs++;
    }
    if (sf > fs)
        cout << "YES";
    else
        cout << "NO";
}