#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    AhmedSarg;
    int n, q;
    cin >> n >> q;
    int* arr = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
        arr[i] = 0;
    while (q--) {
        int z, x;
        cin >> z >> x;
        if (z == 1) {
            arr[x]++;
        }
        else
            cout << arr[x] << "\n";
    }
}