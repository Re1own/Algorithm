#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int ans[12];
int col[12];	//记录每行棋子所在的列在哪个位置
int r, c, cnt;

bool check(int x, int y) {
	for (int i = 0; i < x; i++) {
		if (col[i] == y || abs(col[i] - y) == abs(x-i)) {
			return false;
		}
		//cout << 1 << endl;
	}
	return true;
}


void dfs(int x) {	//x是行
	if (x == c) {
		cnt++;
		return;
	}
	for (int i = 0; i < c; i++) {	//每列考虑一遍
		if (check(x, i)) {
			col[x] = i;
			dfs(x+1);
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	for (c = 0; c < 12; c++) {	//把每列开始考虑一遍
		memset(col, 0, sizeof(col));
		cnt = 0;
		dfs(0);
		ans[c] = cnt;
	}
	while(cin >> c && c) {
		cout << ans[c] << endl;
	}
	return 0;
}