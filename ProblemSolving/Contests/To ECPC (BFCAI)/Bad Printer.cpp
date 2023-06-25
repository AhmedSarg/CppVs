#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    char id[8];
    bool readable = true;
    for0(i, 8) {
        cin >> id[i];
        if (id[i] == '?')
            readable = false;
    }
    if (readable)
        cout << "Yes";
    else
        cout << "No";
}