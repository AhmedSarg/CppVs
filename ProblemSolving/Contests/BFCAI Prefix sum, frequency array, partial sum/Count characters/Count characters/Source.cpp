#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    pair<char, int> arr[52];
    for (int i = 0; i < 52; i++) {
        arr[i].second = 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            arr[s[i] - 'A'].first = s[i];
            arr[s[i] - 'A'].second++;
        }
        else if (s[i] >= 97 && s[i] <= 122) {
            arr[s[i] - 'a' + 26].first = s[i];
            arr[s[i] - 'a' + 26].second++;
        }
    }
    for (int i = 0; i < 52; i++) {
        if (arr[i].second > 0)
            cout << arr[i].first << " " << arr[i].second << "\n";
    }
}