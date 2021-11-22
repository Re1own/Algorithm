#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	BUFF();
	int t;
	cin >> t;
	while(t--) {
		ll a[3];
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		if (a[0] == a[1] && a[0] == a[2]) {
			cout << 0 << endl;
			continue;
		}
		sort(a, a+3);
		if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) {
			a[0]++, a[2]--;
			cout << a[2] - a[0] + a[1] - a[0] + a[2] - a[1] << endl;
		}
		else if (a[0] == a[1]) {
			if (a[2] - a[0] == 1) {
				cout << 0 << endl;
				continue;
			}
			a[2]--;
			a[0]++, a[1]++;
			cout << a[2] - a[0] + a[1] - a[0] + a[2] - a[1] << endl;
		}
		else if (a[1] == a[2]) {
			if (a[1] - a[0] == 1) {
				cout << 0 << endl;
				continue;
			}
			a[0]++;
			a[1]--, a[2]--;
			cout << a[2] - a[0] + a[1] - a[0] + a[2] - a[1] << endl;
		}
	}
	return 0;
}

