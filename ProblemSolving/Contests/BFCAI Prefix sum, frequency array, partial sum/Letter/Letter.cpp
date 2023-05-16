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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int n1 = s1.size(), n2 = s2.size();
    vector<int>pre(52);
    for0(i, n1) {
        if (s1[i] >= 65 && s1[i] <= 90)
            pre[s1[i] - 65]++;
        else if (s1[i] >= 97 && s1[i] <= 122)
            pre[s1[i] - 97 + 26]++;
    }
    bool can = true;
    for0(i, n2) {
        if (s2[i] >= 65 && s2[i] <= 90 && !pre[s2[i] - 65]) {
            can = false;
            break;
        }
        else if (s2[i] >= 65 && s2[i] <= 90 && pre[s2[i] - 65])
            pre[s2[i] - 65]--;
        else if (s2[i] >= 97 && s2[i] <= 122 && !pre[s2[i] - 97 + 26]) {
            can = false;
            break;
        }
        else if (s2[i] >= 97 && s2[i] <= 122 && pre[s2[i] - 97 + 26])
            pre[s2[i] - 97 + 26]--;
    }
    if (can)
        cout << "YES";
    else
        cout << "NO";
}