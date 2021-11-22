#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main(void) {
	ll n;
	cin >> n;
	while(n--) {
		ll c, k;
		cin >> c >> k;
		ll t = k%c, tt = k/c;
		if (t == 0) {
			ll ans = pow((k/c), 2) * c;
			cout << ans << endl;
		}
		else {
			ll ans = pow(tt+1, 2) * t + pow(tt, 2) * (c-t);
			cout << ans << endl;
		}
	}
	return 0;
}