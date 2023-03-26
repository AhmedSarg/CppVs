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
    int n;
    cin >> n;
    set<int>st;
    for0(i, n) {
        int x;
        cin >> x;
        st.insert(x);
    }
    int i  = 0;
    bool flag = true;
    for (auto it : st) {
        i++;
        if (i == 2) {
            cout << it;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "NO";
}