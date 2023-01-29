#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll* arr = new ll[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		vector <ll> v;
		ll max;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= n - i; j++) {
				max = arr[j];
				for (int k = j; k < j + i; k++)
					if (arr[k] > max)
						max = arr[k];
				v.push_back(max);
			}
		}
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
}