#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    deque<int>qs;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?')
            qs.push_back(i);
        else if (s[i] == ')') {
            s[qs.front()] = '(';
        }
    }
}