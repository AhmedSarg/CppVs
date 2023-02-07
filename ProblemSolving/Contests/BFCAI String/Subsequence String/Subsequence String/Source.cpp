#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ind[4] = { -1, -1, -1, -1 };
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'h' && ind[0] == -1)
			ind[0] = i;
		else if (s[i] == 'e' && i > ind[0] && ind[1] == -1 && ind[2] == -1 && ind[3] == -1)
			ind[1] = i;
		else if (s[i] == 'l' && i > ind[1] && ind[2] == -1 && ind[3] == -1)
			ind[2] = i;
		else if (s[i] == 'o' && i > ind[2] && ind[3] == -1)
			ind[3] = i;
	}
	if (ind[0] != -1 && ind[1] != -1 && ind[2] != -1 && ind[3] != -1)
		cout << "YES";
	else
		cout << "NO";
}