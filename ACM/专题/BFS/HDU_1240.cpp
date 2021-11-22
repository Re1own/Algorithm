#include <iostream>
#include <queue>
#include <string>

using namespace std;

int N, begin_x, begin_y, begin_z, end_x, end_y, end_z;
char maps[15][15][15];
int go[6][3] = {1,0,0,-1,0,0,0,1,0,0,-1,0,0,0,1,0,0,-1};

struct node {
	int x, y, z, step;
};

int BFS(void) {
	queue<node> pq;
	node s;
	s.x = begin_x, s.y = begin_y, s.z = begin_z, s.step = 0;
	pq.push(s);
	maps[s.x][s.y][s.z] = 'X';
	while(!pq.empty()) {
		node t = pq.front();
		pq.pop();
		if (t.x == end_x && t.y == end_y && t.z == end_z) {
			return t.step;
		}
		for (int i = 0; i < 6; i++) {
			int tx = t.x + go[i][0];
			int ty = t.y + go[i][1];
			int tz = t.z + go[i][2];
			if (tx >= N || tx < 0 || ty >= N || ty < 0 || tz >= N || tz < 0) {
				continue;
			}
			if (maps[tx][ty][tz] == 'X')	continue;
			maps[tx][ty][tz] = 'X';
			node ok;
			ok.x = tx, ok.y = ty, ok.z = tz, ok.step = t.step+1;
			pq.push(ok);
		}
	}
	return -1;

}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string opt;
	while(cin >> opt >> N) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < N; k++) {
					cin >> maps[i][j][k];
				}
			}
		}
		cin >> begin_y >> begin_z >> begin_x >> end_y >> end_z >> end_x;
		cin >> opt;
		int ans = BFS();
		if (ans == -1) {
			cout << "NO ROUTE" << endl;
			continue;
		}
		else {
			cout << N << " " << ans << endl;
		}

	}
	return 0;
}