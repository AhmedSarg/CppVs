#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char>st;
    bool found = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else {
            found = false;
            if (s[i] == ')')
            {
                while (!st.empty())
                    if (st.top() == '(')
                    {
                        found = true;
                        st.pop();
                        break;
                    }
                    else
                        st.pop();
            }
            else if (s[i] == '}')
            {
                while (!st.empty())
                    if (st.top() == '{')
                    {
                        found = true;
                        st.pop();
                        break;
                    }
                    else
                        st.pop();
            }
            else if (s[i] == ']')
            {
                while (!st.empty())
                    if (st.top() == '[')
                    {
                        found = true;
                        st.pop();
                        break;
                    }
                    else
                        st.pop();
            }
        }
    }
    if (st.empty() && found)
        cout << "YES";
    else
        cout << "NO";
}