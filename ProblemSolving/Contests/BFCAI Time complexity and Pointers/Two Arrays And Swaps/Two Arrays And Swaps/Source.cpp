#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(int& n1, int& n2) {
    return n1 > n2;
}

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int>v1(n);
        vector<int>v2(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            sum += v1[i];
        }
        for (int i = 0; i < n; i++)
            cin >> v2[i];
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), cmp);
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (v1[i] < v2[i] && k--)
            {
                sum -= v1[i];
                sum += v2[i];
                swap(v1[i], v2[i]);
            }
            else
                break;
        }
        cout << sum << "\n";
    }
}