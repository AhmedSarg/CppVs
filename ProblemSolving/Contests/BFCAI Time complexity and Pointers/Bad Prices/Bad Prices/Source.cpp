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
        priority_queue<int>pq;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i != 0){ 
                while (!pq.empty()) {
                    if (x < pq.top())
                    {
                        res++;
                        pq.pop();
                    }
                    else
                        break;
                }
            }
            pq.push(x);
        }
        cout << res << "\n";
    }
}