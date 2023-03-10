#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, k;
    cin >> n >> k;
    multiset<ll>ms;
    ll x;
    for (int i = 0; i < n; i++) {
        ll y;
        cin >> y;
        ms.insert(y);
        if (i == k - 1)
            x = y;
    }
    if (k == 0)
        if (*ms.begin() >= 2)
            cout << *ms.begin() - 1;
        else
            cout << -1;
    else
    {
        int j = 0;
        ll ol, ne;
        bool flag = true;
        for (auto i : ms) {
            j++;
            if (k == n) {
                if (j == n)
                {
                    flag = false;
                    cout << i;
                }
            }
            else
            {
                if (j == k)
                    ol = i;
                else if (j == k + 1)
                    ne = i;
            }
        }
        if (flag)
        {
            ll i = ol;
            if (i >= 1 && i <= 1000000000 && i < ne)
                cout << i;
            else
                cout << -1;
        }
    }
}

//5 0
//2 3 4 5 6

//5 5
//3 3 3 3 3