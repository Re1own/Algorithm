#include <iostream>
#include <vector>

using namespace std;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	hasten();
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> a(n), b(m);
	int p = 0;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < i+d; j++) {

		}
	}
	return 0;
}