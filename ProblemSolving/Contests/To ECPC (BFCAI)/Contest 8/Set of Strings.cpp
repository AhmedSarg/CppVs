#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false);cout.precision(7);cout.setf(ios::fixed);cin.tie(NULL);
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

void printMap(map<int, int> mp) {
    map<int, int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++) {
        cout << itr->first << " "<< itr->second << "\n";
    }
}

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    int k;
    string str;
    cin >> k >> str;
    map<char, int> mp;
    vector<int>starts;
    for0(i, str.size()) {
        if (mp[str[i]] == 0) {
            starts.push_back(i);
        }
        mp[str[i]]++;
    }
    if (starts.size() >= k) {
        cout << "YES" << "\n";
        int i = 0;
        int len = 0;
        while (i < k - 1) {
            i += len;
            string strCopy = str.substr(i, starts[i + 1]);
            len = strCopy.length();
            cout << strCopy << "\n";
        }
        cout << str.substr(starts[i], str.length()) << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}
    