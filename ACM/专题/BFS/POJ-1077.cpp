#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

const int maxn = 1e6+10;
int _s, _e, aim;
int vis[maxn];
int fac[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};
int go[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
char op[4] = {'d', 'u', 'l', 'r'};

struct node {
	char option[maxn];
	int len;
	int status[9];	//排列
	int position;	//x的位置
	int can;	//哈希值
};

int cantor(int status[]) {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		int num = 0;	//统计此位置后面比当前位的数值还要小的数的个数
		for (int j = i+1; j < 9; j++) {
			if (status[i] > status[j]) {
				num++;
			}
		}
		sum += num*fac[8-i];
	}
	return sum+1;
}

node q[maxn];
int head, tail;

void BFS(node s) {
	vis[cantor(s.status)] = 1;
	q[tail++] = s;
	while(head != tail) {
		node f = q[head++];
		int x = f.position/3, y = f.position%3;
		//cout << x << " " << y << endl;
		for (int i = 0; i < 4; i++) {
			node ok = f;
			int tx = x + go[i][0];
			int ty = y + go[i][1];
			//cout << tx << " " << ty << endl;
			if (tx < 0 || tx > 2 || ty < 0 || ty > 2)	continue;
			ok.status[x*3+y] = ok.status[tx*3+ty];
			ok.status[tx*3+ty] = 9;
			//swap(ok.status[tx*3+ty], ok.status[x*3+y]); 
			ok.can = cantor(ok.status);
			if (vis[ok.can])	continue;
			vis[ok.can] = 1;
			ok.position = tx*3 + ty;
			ok.option[ok.len] = op[i];
			ok.len++;
			//ok.opt.push(op[i]);
			if (ok.can == 1) {
				/*queue<char> ans = ok.opt;
				while(!ans.empty()) {
					cout << ans.front();
					ans.pop();
				}
				cout << endl;
				*/
				for (int j = 0; j < ok.len; j++) {
					cout << ok.option[j];
				}
				cout << endl;
				return;
			}
			q[tail++] = ok;
		}
	}
	cout << "unsolvable" << endl;
	return;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	node s;
	char ch;
	for (int i = 0; i < 9; i++) {
		cin >> ch;
		if (ch == 'x') {
			s.position = i;
			s.status[i] = 9;
		} 
		else {
			s.status[i] = ch - '0';
		}
	}
	BFS(s);
	return 0;
}