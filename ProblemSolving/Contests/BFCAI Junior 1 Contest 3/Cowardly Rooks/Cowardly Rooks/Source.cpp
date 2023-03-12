#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        //int arr[9][9] = {
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //                {0, 0, 0, 0, 0, 0, 0, 0}
        //              };
        ////vector<pair<int, int>>v(m);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
        }
        if (n > m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}