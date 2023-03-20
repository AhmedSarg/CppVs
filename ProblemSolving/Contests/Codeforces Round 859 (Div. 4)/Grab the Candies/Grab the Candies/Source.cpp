#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sume = 0, sumo = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                sume += x;
            else
                sumo += x;
        }
        if (sume > sumo)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}