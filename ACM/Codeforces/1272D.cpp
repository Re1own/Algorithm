#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 2e5 + 5;
int dp1[maxn], a[maxn], dp2[maxn];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0)	dp1[i] = 1;
		else {
			if (a[i] > a[i-1]) {
				dp1[i] = dp1[i-1]+1;
			}
			else {
				dp1[i] = 1;
			}
			ans = max(ans, dp1[i]);
		}
	}
	for (int i = n-1; i >= 0; i--) {
		if (a[i+1] > a[i]) {
			dp2[i] = dp2[i+1] + 1;
		}
		else {
			dp2[i] = 1;
		}
	}
	for (int i = 1; i < n; i++) {
		if (a[i+1] > a[i-1])	ans = max(ans, dp2[i+1] + dp1[i-1]);
	}
	cout << ans << endl;
	return 0;
}
