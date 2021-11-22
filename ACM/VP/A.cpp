#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<char> st(n);
		int num[n+1];
		for (int i = 0; i < n; i++)	{
			cin >> st[i];
			//num[i] = 0;
		}
		memset(num, 0, sizeof(num));
		int ans = 0;
		for (int i = n-1; i >= 0; i--) {
			if (st[i] == 'P') {
				num[i] = num[i+1] + 1;
			}
			else {
				ans = max(ans, num[i+1]);
				num[i] = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}