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
    int sum = 0;
    for0(i, n) {
        if (s[i] == '+')
            sum++;
        else if (s[i] == '-' && sum > 0)
            sum--;
    }
    cout << sum;
}