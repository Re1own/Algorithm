#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		ll n, p, k;
		cin >> n >> p >> k;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		ll sum = 0, ans = 0, cnt, initial = 0;
		for (ll i = 0; i <= k; i++) {
			sum = initial;
			if (sum > p)	break;
			cnt = i;
			for (ll j = i+k-1; j < n; j += k) {
				if (sum + a[j] <= p) {
					cnt += k;
					sum += a[j];
				}
				else {
					break;
				}
			}
			initial += a[i];
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
}