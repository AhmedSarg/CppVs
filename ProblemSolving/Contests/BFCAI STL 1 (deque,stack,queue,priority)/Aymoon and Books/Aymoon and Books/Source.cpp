#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n;
    cin >> n;
    deque<int>dq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    priority_queue<int>pq;
    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        if (c == 'L')
        {
            if (!dq.empty())
            {
                int x = dq.front();
                dq.pop_front();
                pq.push(x);
            }
        }
        else if (c == 'R')
        {
            if (!dq.empty())
            {
                int x = dq.back();
                dq.pop_back();
                pq.push(x);
            }
        }
        else if (c == 'Q') {
            if (pq.empty())
                cout << -1 << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
}