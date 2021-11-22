#include <iostream>
#include <set>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		ll n;
		cin >> n;
		set<ll> number;
		vector<ll> who;
		map<ll, ll> hash;
		for (ll i = 0; i < n; i++) {
			ll t;
			cin >> t;
			if (t%2 == 0) {
				ll odd, cnt = 0;
				while(t % 2 == 0) {
					t /= 2;
					cnt++;
				}
				number.insert(t);
				hash[t] = max(cnt, hash[t]);
			}
		}
		ll ans = 0;
		for (auto i : number) {
			ans += hash[i];
		}
		cout << ans << endl;
		//xgbreak;
	}
}