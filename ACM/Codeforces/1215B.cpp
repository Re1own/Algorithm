#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		if (num[i] > 0)	num[i] = 1;
		else	num[i] = -1;
	}
	ll ans1 = 0, ans2 = 0, cnt1 = 0, cnt2 = 0, t = 1;
	for (int i = 0; i < n; i++) {
		t *= num[i];
		if (t > 0) {
			ans1 += cnt1;
			ans2 += cnt2;
			cnt1++;
			ans1++;
		}
		else {
			ans1 += cnt2;
			ans2 += cnt1;
			cnt2++;
			ans2++;
		}
	}
	cout << ans2 << " " << ans1 << endl;
	return 0;
}