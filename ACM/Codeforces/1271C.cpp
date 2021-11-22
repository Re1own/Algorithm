#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
	int x, y, cnt;
};

bool cmp(node a, node b) {
	return a.cnt < b.cnt;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, sx, sy;
	node ans[4];
	cin >> n >> sx >> sy;
	ans[0].x = sx, ans[0].y = sy+1, ans[0].cnt = 0;
	ans[1].x = sx, ans[1].y = sy-1, ans[1].cnt = 0;
	ans[2].x = sx+1, ans[2].y = sy, ans[2].cnt = 0;
	ans[3].x = sx-1, ans[3].y = sy, ans[3].cnt = 0;
	vector<node> dian(n);
	for (int i = 0; i < n; i++) {
		cin >> dian[i].x >> dian[i].y;
		int dist = abs(dian[i].x - sx) + abs(dian[i].y - sy);
		for (int j = 0; j < 4; j++) {
			int t = abs(dian[i].x - ans[j].x) + abs(dian[i].y - ans[j].y);
			if (t < dist)	ans[j].cnt++;
		}
	}
	sort(ans, ans+4, cmp);
	cout << ans[3].cnt << endl;
	cout << ans[3].x << " " << ans[3].y << endl;
	return 0;
}