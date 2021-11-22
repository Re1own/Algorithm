#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int maxn = 1e5+5;
int book[maxn];

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

vector<int> ans;
vector<int> arr[maxn];
int vis[maxn];
int cnt[maxn];

int main(void) {
	BUFF();
	int n;
	cin >> n;
	for (int i = 0; i < n-2; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		arr[x].emplace_back(y), arr[x].emplace_back(z);
		arr[y].emplace_back(x), arr[y].emplace_back(z);
		arr[z].emplace_back(x), arr[z].emplace_back(y);
		cnt[x]++, cnt[y]++, cnt[z]++;
	}
	for (int i = 1; i <= n; i++) {	//找头部
		if (cnt[i] == 1) {
			ans.emplace_back(i);
			vis[i] = 1;
			for (auto f : arr[i]) {
				if (cnt[f] == 2) {
					ans.emplace_back(f);
					vis[f] = 1;
					break;
				}
			}
			break;
		}
	}
	for (int i = 2; i < n; i++) {
		int flag = 0;
		for (auto x : arr[ans[i-2]]) {
			for (auto y : arr[ans[i-1]]) {
				if (x == y && !vis[y]) {
					ans.emplace_back(y);
					flag = 1;
					vis[y] = 1;
					break;
				}
			}
			if (flag)	break;
		}
	}
	for (auto i : ans) {
		cout << i << " ";
	}
	return 0;
}
