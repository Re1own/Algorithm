#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int;
//#define int long long;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		vector<ll> num(n);
		for (ll i = 0; i < n; i++) {
			cin >> num[i];
		}
		vector<ll> ans;
		if (n%2 == 1) {
			for (ll i = 0; i < n/2; i++) {
				ans.push_back(i);
			}
			ans.push_back(n/2);
			for (ll i = n/2-1; i >= 0; i--) {
				ans.push_back(i);
			}
		}
		else {
			for (ll i = 0; i <= n/2; i++) {
				ans.push_back(i);
			}
			for (ll i = n/2-1; i >= 0; i--) {
				ans.push_back(i);
			}
		}
		int flag = 0;
		for (ll i = 0; i < n; i++) {
			if (num[i] < ans[i]) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			cout << "Yes" << endl;
			continue;
		}

		flag = 0;
		ll t = num[0];
		for (ll i = 1; i < n; i++) {
			if (num[i] < t) {
				t = num[i];
			}
			else {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			cout << "Yes" << endl;
			continue;
		}

		flag = 0, t = num[0];
		for (ll i = 1; i < n; i++) {
			if (num[i] > t) {
				t = num[i];
			}
			else {
				flag  = 1;
				break;
			}
		}

		if (flag) {
			cout << "No" << endl;
		}
		else {
			cout << "Yes" << endl;
		}
	} 
}