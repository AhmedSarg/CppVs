#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, nc;
    cin >> n;
    priority_queue<int>pq;
    priority_queue<int>pqc;
    queue<int>q;
    nc = n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
        pq.push(x);
        if (x == nc)
        {
            while (!pq.empty() && x == nc)
            {
                nc--;
                cout << pq.top() << " ";
                pq.pop();
                if (!pq.empty())
                    x = pq.top();
            }
            cout << "\n";
        }
        else
            cout << "\n";
    }
}