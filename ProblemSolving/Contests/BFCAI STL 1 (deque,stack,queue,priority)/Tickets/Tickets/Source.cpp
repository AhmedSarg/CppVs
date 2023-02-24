#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    queue<int>q;
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            q.push(b);
        else {
            if (q.front() == b)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            q.pop();
        }
    }
}