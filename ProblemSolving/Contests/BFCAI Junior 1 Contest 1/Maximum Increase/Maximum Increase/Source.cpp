#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    vector<pair<ll, int>>v(n);
    int max = 1;
    int cont = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
        if (i != 0)
        {
            if (v[i].first > v[i - 1].first)
                cont++;
            else
                cont = 1;
            if (cont > max)
                max = cont;
        }
    }
    cout << max;
}