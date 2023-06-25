#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

int main() {
    AhmedSarg;
    #ifndef ONLINE_JUDGE
        fileio;
    #endif
    ll a;
    cin >> a;
    ll n = to_string(a).length();
    ll *arr = new ll[n];
    for (ll i = n; i > 0; i--) {
        arr[n - i] = (a % (ll)pow(10, i)) / (ll)pow(10, i - 1);
    }
    int sum = 0;
    for (ll i = n - 1; i >= 0; i--) {
        int j = n - i - 1;
        if (arr[i] <= 8) {
            sum += (8 - arr[i]) * pow(10, j);
            break;
        }
        else
            sum -= arr[i] * pow(10, j);
    }
    if (sum == 0)
        cout << 10;
    else
        cout << sum;
}