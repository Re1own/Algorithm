#include <iostream>
#include <ctime>
#include <queue>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

char room[23][23];
int go[4][2] = {1,0, -1, 0, 0, 1, 0, -1};
int s, e, a, b;

struct node {
	int x, y, sum, step;
	node(int sum, int step, int x, int y) : sum(sum), step(step), x(x), y(y) {}
};
void BFS(void) {
	queue<node> q;
	int tx = s, ty = e, sum = 0, step = 0, maxn = 1;
	q.push(node(++sum, ++step, tx, ty));
	while(!q.empty()) {
		node t = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int tx = t.x + go[i][0], ty = t.y + go[i][1];
			if (tx >= b || tx < 0 || ty < 0 || ty >= a)	continue;
			if (room[tx][ty] != '.')	continue;
			q.push(node(++sum, step, tx, ty));
			room[tx][ty] = '#';
			maxn++;
		}
		step++;
	}
	cout << maxn << endl;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin >> a >> b) {
		if (a == 0 && b == 0)	break;
		//clock_t start, end;
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				cin >> room[i][j];
				if (room[i][j] == '@') {
					s = i, e = j;
				}
			}
		}
		//start = clock();
		BFS();
		//end = clock();
		//cout << (double)(end - start) / CLOCKS_PER_SEC << "s" << endl;
	}

	return 0;
}