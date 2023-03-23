#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    int n = s.size();
    vector<int>v(10);
    for (int i = 0; i < n; i++)
        v[s[i] - 48]++;
    for (int i = 0; i <= 9; i++) {
        cout << i << " " << v[i] << "\n";
    }
}