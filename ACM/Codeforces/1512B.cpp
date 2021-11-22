#include <iostream>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char m[n][n];
		int x[2], y[2], p = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> m[i][j];
				if (m[i][j] == '*') {
					x[p] = i;
					y[p] = j;
					p++;
				}
			}
		}
		if (x[0] == x[1]) {
			int det = 1;
			if (x[0] + det < n && x[1] + det < n) {
				m[x[0] + det][y[0]] = m[x[1] + det][y[1]] = '*';
			}
			else {
				m[x[0] - det][y[0]] = m[x[1] - det][y[1]] = '*';
			}
		}
		else if (y[0] == y[1]) {
			int det = 1;
			if (y[0] + det < n && y[1] + det < n) {
				m[x[0]][y[0] + det] = m[x[1]][y[1] + det] = '*';
			}
			else {
				m[x[0]][y[0] - det] = m[x[1]][y[1] - det] = '*';
			}
		}
		else {
			m[x[0]][y[1]] = '*';
			m[x[1]][y[0]] = '*';
		}


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j];
			}
			cout << endl;
		}

	}

	return 0;
}