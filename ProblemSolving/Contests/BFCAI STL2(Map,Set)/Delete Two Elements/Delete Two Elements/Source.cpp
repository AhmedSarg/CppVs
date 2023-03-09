#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multimap<double, double>mp;
        double s = 0;
        for (int i = 0; i < n; i++) {
            double x;
            cin >> x;
            mp.insert({ x, -1 });
            s += x;
        }
        double mean = s / (float)n;
        int res = 0;
        for (auto& it : mp) {
            if (it.first >= mean * 2)
                it.second = it.first - mean * 2;
            else
                it.second = mean * 2 - it.first;
        }
        for (auto it : mp) {
            auto item1 = mp.find(it.first);
            auto item2 = mp.find(it.second);
            if (item2 != mp.end())
            {
                res++;
            }
        }
        cout << res << "\n";
    }
}