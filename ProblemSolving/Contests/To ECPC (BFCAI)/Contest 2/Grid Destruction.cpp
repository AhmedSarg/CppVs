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
    int n, m, r, c;
    cin >> n >> m;
    r = n, c = m;
    char arr[101][101];
    for0(i, n) {
        for0(j, m) {
            cin >> arr[i][j];
        }
    }
    vector <string> v1;
    for0(i, n) {
        bool flag = true;
        for0(j, m) {
            if (arr[i][j] == '#') {
                flag = false;
                break;
            }
        }
        if (!flag) {
            string s = "";
            for0(j, m) {
                s += arr[i][j];
            }
            v1.push_back(s);
        }
        else {
            r--;
        }
    }
    vector <string> transpose(n, "");
    for0(i, r) {
        for0(j, c) {
            transpose[i] += v1[j][i];
        }
    }
    vector <string> v2;
    for0(i, n) {
        bool flag = true;
        for0(j, m) {
            if (transpose[i][j] == '#') {
                flag = false;
                break;
            }
        }
        if (!flag) {
            string s = "";
            for0(j, m) {
                s += transpose[i][j];
            }
            v2.push_back(s);
        }
        else {
            c--;
        }
    }
    for0(i, n) {
        cout << v2[i] << "\n";
    }
}