#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		map<int, int> mp;
		vector<int> a(n), b(n), left2(n+1), left1(n+1), right1(n+1), right2(n+1);
		for (int i = n-1; i >= 0; i--) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		for (int i = n-1; i >= 0; i--) {
			//cin >> a[i];
			if (i == n-1) {
				a[i] == 1? left1[i] = 1 : left2[i] = 1;
				continue;
			} 
			if (a[i] == 1) {
				left1[i] = left1[i+1] + 1;
				left2[i] = left2[i+1];
			}
			else {
				left2[i] = left2[i+1] + 1;
				left1[i] = left1[i+1];
			}
		}
		for (int i = n-1; i >= 0; i--) {
			//cin >> b[i];
			if (i == n-1) {
				b[i] == 1? right1[i] = 1 : right2[i] = 1;
				continue;
			}
			if (b[i] == 1) {
				//cout << "#" << endl;
				right1[i] = right1[i+1] + 1;
				right2[i] = right2[i+1];
			}
			else {
				right2[i] = right2[i+1] + 1;
				right1[i] = right1[i+1];
			}
		}
		int ans = 2*n;
		for (int i = 0; i <= n; i++) {
			int k = left1[i]-left2[i];
			if (mp[k] == 0) {
				mp[k] = i;
				//cout << i << endl;
			}
		}
		for (int i = 0; i <= n; i++) {
			int k = right2[i]-right1[i];
			//cout << k << endl;
			if (mp[k] != 0) {
				//cout << "222" << endl;
				ans = min(mp[k] + i, ans);
			}
		}
		for (int i = 0; i <= n; i++) {
			if (right1[0] + left1[i] == right2[0] + left2[i]) {
				ans = min(ans, i);
			}
		}
		for (int i = 0; i <= n; i++) {
			if (right1[i] + left1[0] == right2[i] + left2[0]) {
				ans = min(ans, i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}

