#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    string s;
    cin >> s;
    stack<char>st1;
    stack<char>st2;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '<')
            st1.push(s[i]);
        else
            st1.pop();
    }
    int n1 = st1.size();
    for (int i = 0; i < n1; i++) {
        char x = st1.top();
        st2.push(x);
        st1.pop();
    }
    int n2 = st2.size();
    for (int i = 0; i < n2; i++) {
        cout << st2.top();
        st2.pop();
    }
}