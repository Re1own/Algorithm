#include <iostream>
#include <set>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int m = (int)sqrtl(n);
		vector<int> ans;
		for (int i = 0; i <= m; i++) {
			ans.push_back(i);
		}
		for (int i = 1; i <= m; ++i)
		{
			ans.push_back(n/i);
		}
		sort(ans.begin(), ans.end());
		ans.resize(unique(ans.begin(), ans.end()) - ans.begin());
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); i++) {
			i == 0? cout << ans[i] : cout << " " << ans[i];
		}
		cout << endl;
	}
}