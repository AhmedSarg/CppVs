#include <iostream>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	ll suma = 0;
	ll sume = 0;
	ll sumo = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		suma += arr[i];
		if (arr[i] % 2 == 0)
			sume += 1;
		else
			sumo += 1;
	}
	cout << suma << " " << sumo << " " << sume;
}