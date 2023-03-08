#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 2; i < n / 2; i++) {
        if ((n / i) % 2 == 0 && (n - n / i) % 2 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}