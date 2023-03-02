#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>>pq;
        for (int i = 0; i < n; i++) {
            char x;
            cin >> x;
            bool cap = false;
            if (x <= 90 && x >= 65)
            {
                cap = true;
                x += 32;
            }
            pq.push(make_pair(x, cap));
        }
        pair<char, int> tmp;
        int b = 0;
        for (int i = 1; i < pq.size(); i++) {
            tmp = pq.top();
            pq.pop();
            if (pq.top().first == tmp.first)
            {
                if (pq.top().second == tmp.second && k) {
                    b++;
                    k--;
                }
                else if (pq.top().second != tmp.second)
                    b++;
                pq.pop();
            }
        }
        cout << b << "\n";
    }
}