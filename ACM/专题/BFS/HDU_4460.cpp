#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>

using namespace std;

const int INF = 0x3f3f3f3f;
const int maxn = 1005;
int vis[maxn];
int dis[maxn][maxn];
int ans;
vector<int> G[maxn];

void BFS(int a) {
	queue<int> q;
	q.push(a);
	memset(vis, 0, sizeof(vis));
	vis[a] = 1;
	while(!q.empty()) {
		int f = q.front();
		q.pop();
		int len = G[f].size();
		for (int i = 0; i < len; i++) {
			int v = G[f][i];
			//cout << v << endl;
			if (vis[v])	continue;
			vis[v] = 1;
			dis[a][v] = dis[a][f] + 1;
			q.push(v);
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin >> n && n) {
		map<string, int> ref;
		for (int i = 0; i < n; i++) {
			G[i].clear();
			string s;
			cin >> s;
			ref[s] = i;
		}
		int m;
		cin >> m;
		while(m--) {
			string a, b;
			cin >> a >> b;
			int ta = ref[a], tb = ref[b];
			G[ta].push_back(tb);
			G[tb].push_back(ta);
		}
		for (int i = 0; i < n; i++) {
			dis[i][i] = 0;
			for (int j = i+1; j < n; j++) {
				dis[i][j] = dis[j][i] = INF;
			}
		}
		for (int i = 0; i < n; i++) {
			BFS(i);
		}
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				ans = max(ans, dis[i][j]);
			}
		}
		if (ans == INF)	ans = -1;
		cout << ans << endl;
	}
	return 0;
}