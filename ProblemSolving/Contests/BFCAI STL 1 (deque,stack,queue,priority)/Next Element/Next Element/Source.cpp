#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    vector<pair<ll, int>>v(n);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = -1;
        if (i != 0) {
            int j = i - 1;
            while (v[i].first > v[j].first)
            {
                if (v[j].second == -1)
                {
                    v[j].second = i;
                    break;
                }
                else if (v[j].second < j)
                {
                    int k;
                    k = j;
                    j = v[j].second;
                    v[k].second = i;
                }
            }
            while (v[i].first <= v[j].first)
            {
                if (v[j].second == -1)
                {
                    v[i].second = j;
                    break;
                }
                else
                    v[i].second = v[j].second;
            }
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int i;
        cin >> i;
        i--;
        if (v[i].second != -1)
            cout << v[i].second + 1 << "\n";
        else
            cout << -1 << "\n";
    }
}