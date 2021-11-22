#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int maxn = 1e5+5;
set<int> G[maxn], s;	//s存要讨论的带你

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void dfs(int x) {
	vector<int> vec;
	for (auto i : s) {
		if (G[x].find(i) == G[x].end()) {	//如果不是联通的，那么它的补图一定联通
			vec.push_back(i);
		}
	}
	for (auto i : vec) {
		s.erase(i);	//访问了的就不再搜索了
	}
	for (auto i : vec) {	//搜索这些在补图中相连的点所连接的所有节点，统统删除
		dfs(i);
	}
}
int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		G[x].insert(y);
		G[y].insert(x);
	}
	int ans = 0;	//ans用来统计补图的连通块个数
	for (int i = 1; i <= n; i++) {
		s.insert(i);
	}
	for (int i = 1; i <= n; i++) {
		if (s.find(i) != s.end()) {	//s中保留的是还未搜索的点
			dfs(i);	//每次dfs一次就有很多点被排除，想想，如果所有点都互通，补图就没有连通块了
			ans++;
		}
	}
	cout << ans-1 << endl;	//减去自己
	return 0;
}