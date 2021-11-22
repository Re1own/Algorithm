#include <iostream>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		ll n, cnt = 0;
		cin >> n;
		if (n < 10) {
			cout << n << endl;
			continue;
		}
		ll p = 0, tn = n;
		while(tn) {
			tn /= 10;
			p++;
		}
		//cout << p << endl;
		cnt += (p-1)*9;
		for (ll i = 1; i <= 9; i++) {
			ll k = i;
			for (ll j = 1; j < p; j++) {
				k = k*10 + i;
			}
			//cout << k << endl;
			if (k <= n)	cnt++;
			else {
				break;
			}
		}
		cout << cnt << endl;
	}
}