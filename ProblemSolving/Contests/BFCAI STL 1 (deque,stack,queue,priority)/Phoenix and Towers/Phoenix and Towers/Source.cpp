#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            pq.push(make_pair(tmp, i));
        }
        priority_queue<int, vector<int>, greater<int>>s;
        vector<int>res(n);
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (j == m)
                j = 0;
            if (s.size() != m)
            {
                s.push(pq.top().first);
            }
            else {
                int tmp = s.top() + pq.top().first;
                s.pop();
                s.push(tmp);
            }
            res[pq.top().second] = j + 1;
            pq.pop();
            j++;
        }
        int c1 = s.top(), c2;
        while (m != 1)
        {
            s.pop();
            m--;
        }
        c2 = s.top();
        if (abs(c1 - c2) > x)
            cout << "NO" << "\n";
        else
        {
            cout << "YES" << "\n";
            for (int i = 0; i < n; i++)
                cout << res[i] << " ";
            cout << "\n";
        }
    }
}
//1
//5 2 3
//1 4 2 4 10