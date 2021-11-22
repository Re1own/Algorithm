#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;	//first记录最小，second记录最大

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<pii> ok;
	vector<ll> num;
	ll n;
	cin >> n;

	ll ans = 1ll*n*n;	//所有情况
	for (ll i = 0; i < n; i++) {
		ll m;
		cin >> m;
		vector<ll> v(m);
		for (ll j = 0; j < m; j++) {
			cin >> v[j];
		}

		if (is_sorted(v.begin(), v.end(), greater<ll>())) {	//严格单调递减的,正向不存在升序
			ok.emplace_back(pii(v.back(), v.front()));
			num.emplace_back(v.front());
		}
	}

	sort(num.begin(), num.end());
	for (ll i = 0; i < ok.size(); i++) {
		ans -= (upper_bound(num.begin(), num.end(), ok[i].first) - num.begin());	//找当前pair的最小值大于整个ok的最大值的数目
	}
	cout << ans << endl;
	return 0;
}