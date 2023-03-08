#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

bool cmp(int& n1, int& n2) {
    return n1 > n2;
}

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    vector<int>v(n);
    int taxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    int left = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == -1)
            continue;
        left += v[i];
        if (left == 4)
        {
            taxi++;
            left = 0;
        }
        else if (i != n - 1) {
            bool used = false;
            for (int j = i + 1; j < n; j++) {
                if (v[j] == -1)
                    continue;
                if (v[j] + left <= 4) {
                    left += v[j];
                    v[j] = -1;
                    used = true;
                }
                if (left == 4)
                {
                    left = 0;
                    taxi++;
                    break;
                }
            }
            if (!used)
                taxi++;
        }
    }
    cout << taxi;
}