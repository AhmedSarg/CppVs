#include <bits/stdc++.h>
using namespace std;

struct grades {
	string name;
	int a, m, s, e;
	int sum;
};

bool cmp(grades& g1, grades& g2) {
	if (g1.sum == g2.sum)
		return (g1.name < g2.name);
	return (g1.sum > g2.sum);
}

int main() {
	int n;
	cin >> n;
	vector<grades>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].name >> v[i].a >> v[i].m >> v[i].s >> v[i].e;
		v[i].sum = v[i].a + v[i].m + v[i].s + v[i].e;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++)
		cout << v[i].name << " " << v[i].sum << " " << v[i].a << " " << v[i].m << " " << v[i].s << " " << v[i].e << endl;
}