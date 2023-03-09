#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    set<ll>ms;
    int res = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    while (ms.size() != 0)
    {
        set<ll>ns;
        for (auto it : ms) {
            if (ms.upper_bound(0) == ms.end())
                break;
            if (it != 0)
            {
                ll min = *ms.upper_bound(0);
                if (it - min > 0)
                    ns.insert(it - min);
            }
        }
        res++;
        ms = ns;
    }
    cout << res;
}