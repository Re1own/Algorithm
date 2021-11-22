#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const ll maxn = 2e5 + 5;

ll r[maxn], l[maxn], num[maxn];	//r记录右边的负数(包括自己)，l记录左边的正数(不包括自己)

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (ll i = 1; i < n; i++) {
		if (i == 1)	{
			if (num[i-1] >= 0)	l[i]++;
			continue;
		}
		if (num[i-1] >= 0)	l[i] = l[i-1]+1;
		else	l[i] = l[i-1];
	}

	for (ll i = n-1; i >= 0; i--) {
		if (num[i] <= 0)	r[i] = r[i+1]+1;
		else	r[i] = r[i+1];
	}

	ll ans = n;
	for (ll i = 1; i < n; i++) {
		ans = min(ans, l[i]+r[i]);
	}

	cout << ans << endl;
	return 0;
}