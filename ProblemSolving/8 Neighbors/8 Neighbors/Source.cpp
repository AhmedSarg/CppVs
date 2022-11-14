#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	char arr[100][100];
	int x, y;
	int xs = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'x')
				xs += 1;
		}
	}
	cin >> x >> y;
	x -= 1;
	y -= 1;
	if (xs == m * n) {
		cout << "yes";
	}
	else if (xs < 3) {
		cout << "no";
	}
	else {
		//top left corner
		if (x == 0 && y == 0) {
			if (arr[x + 1][y] == 'x' && arr[x][y + 1] == 'x' && arr[x + 1][y + 1] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//bottom right corner
		else if (x == m - 1 && y == n - 1) {
			if (arr[x - 1][y] == 'x' && arr[x][y - 1] == 'x' && arr[x - 1][y - 1] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//top right corner
		else if (x == 0 && y == n - 1) {
			if (arr[x + 1][y] == 'x' && arr[x][y - 1] == 'x' && arr[x + 1][y - 1] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//bottom left corner
		else if (x == m - 1 && y == 0) {
			if (arr[x - 1][y] == 'x' && arr[x][y + 1] == 'x' && arr[x - 1][y + 1] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//left side
		else if (x != 0 && x != m - 1 && y == 0) {
			if (arr[x - 1][y] == 'x' && arr[x - 1][y + 1] == 'x' && arr[x][y + 1] == 'x' && arr[x + 1][y + 1] == 'x' && arr[x + 1][y] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//right side
		else if (x != 0 && x != m - 1 && y == n - 1) {
			if (arr[x - 1][y] == 'x' && arr[x - 1][y - 1] == 'x' && arr[x][y - 1] == 'x' && arr[x + 1][y - 1] == 'x' && arr[x + 1][y] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//top side
		else if (x == 0 && y != 0 && y != n - 1) {
			if (arr[x][y - 1] == 'x' && arr[x + 1][y - 1] == 'x' && arr[x + 1][y] == 'x' && arr[x + 1][y + 1] == 'x' && arr[x][y + 1] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//down side
		else if (x == m - 1 && y != 0 && y != n - 1) {
			if (arr[x][y - 1] == 'x' && arr[x - 1][y - 1] == 'x' && arr[x - 1][y] == 'x' && arr[x - 1][y + 1] == 'x' && arr[x][y + 1] == 'x')
				cout << "yes";
			else
				cout << "no";
		}
		//anywhere else
		else {
			if (arr[x + 1][y] == 'x' && arr[x + 1][y - 1] == 'x' && arr[x][y - 1] == 'x' && arr[x - 1][y - 1] == 'x' && arr[x - 1][y] == 'x' && arr[x - 1][y + 1] == 'x' && arr[x][y + 1] == 'x' && arr[x + 1][y + 1] == 'x')
				cout << "yes";
			else {
				cout << "no";
			}
		}
	}
}