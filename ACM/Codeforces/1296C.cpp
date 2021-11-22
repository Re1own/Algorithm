#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

typedef pair<int, int> pii;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		string str;
		int n;
		cin >> n >> str;
		int l = -1, r = n, flag = 0, det = n;
		pii target = {0,0};
		map<pii, int> vis;
		vis[target] = 0;
		for (int i = 0; i < n; i++) {
			if (str[i] == 'U')	target.first++;
			else if (str[i] == 'D')	target.first--;
			else if (str[i] == 'R')	target.second++;
			else if (str[i] == 'L')	target.second--;
			if (vis.count(target)) {
				flag = 1;
				if (i+1 - vis[target] < r - l+1) {
					l = vis[target];
					r = i;
				}
			}
			vis[target] = i+1;
		}
		if (flag == 0) {
			cout << "-1" << endl;
		}
		else {
			cout << l+1 << " " << r+1 << endl;
		}
	}
	return 0;
}