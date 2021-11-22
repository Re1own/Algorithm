#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		ll a, b;
		cin >> a >> b;
		if (a == b)	cout << 0 << endl;
		else {
			for (ll i = 1; i <= 1e6; i++) {
				ll s = i*(i+1)/2;
				if (s >= abs(b-a)) {
					if ((s - abs(b-a))%2 == 0) {
						cout << i << endl;
						break;
					}
				}
			}
		}

	}
	return 0;
}