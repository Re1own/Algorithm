#include <iostream>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}


		if (a[0] != a[1] && a[1] == a[2]) {
			cout << 1 << endl;
		}
		else if (a[0] != a[1] && a[0] == a[2]) {
			cout << 2 << endl;
		}
		else if (a[0] == a[1] && a[1] != a[2]) {
			cout << 3 << endl;
		}
		else {
			for (int i = 3; i < n; i++) {
				if (a[i] != a[0]) {
					cout << i + 1 << endl;
				}
			}
		}

	}

	return 0;
}