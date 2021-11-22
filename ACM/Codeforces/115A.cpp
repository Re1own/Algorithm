#include <iostream>
#include <vector>

using namespace std;

const int maxn = 2e3+5;
int ans;
int vis[maxn];
vector<int> employee;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void dfs(int t, int s) {
	if (t == -1)	return;
	else {
		if (vis[t] == 0) {
			vis[t] = 1;
			dfs(employee[t], s+1);
			vis[t] = 0;
			ans = max(ans, s);
		}
	}
}
int main(void) {
	hasten();
	int n;
	cin >> n;
	employee.resize(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> employee[i];
	}
	for (int i = 1; i <= n; i++) {
		dfs(employee[i], 1);
	}
	cout << ans+1;
	return 0;
}