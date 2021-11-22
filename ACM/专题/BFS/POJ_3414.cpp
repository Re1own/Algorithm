#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

struct node {
	int a, b, opt;
	queue<int> ok;
};

void print_opt(node ans) {
	//cout << 1 << endl;
	queue<int> t = ans.ok;
	cout << t.size() << endl;
	while(!t.empty()) {
		if (t.front() == 0) {
			cout << "FILL(2)" << endl;
		}
		else if (t.front() == 1) {
			cout << "FILL(1)" << endl;
		}
		else if (t.front() == 2) {
			cout << "DROP(1)" << endl;
		}
		else if (t.front() == 3) {
			cout << "DROP(2)" << endl;
		} 
		else if (t.front() == 4) {
			cout << "POUR(2,1)" << endl;
		}
		else {
			cout << "POUR(1,2)" << endl;
		}
		t.pop();
		//cout << 2 << endl;
	}
}
void BFS(int A, int B, int C) {
	int vis[105][105];
	memset(vis, 0, sizeof(vis));
	vis[0][0] = 1;
	queue<node> pq;
	node s, t;
	s.a = s.b = s.opt = 0;
	pq.push(s);
	while(!pq.empty()) {
		s = pq.front();
		//cout << s.a << " " << s.b << endl;
		if (s.a == C || s.b == C) {
			print_opt(s);
			return;
		}
		pq.pop();
		for (int i = 0; i < 6; i++) {
			t.a = s.a, t.b = s.b, t.ok = s.ok;
			if (i == 0 && t.b != B) {	//B倒满
				t.b = B;
				t.a = s.a;
				//cout << "###" << endl;
				//cout << t.a << " " << t.b << endl;
			}
			else if (i == 1 && t.a != A) {	//A倒满
				t.a = A;
				t.b = s.b;
				//cout << t.a << " " << t.b << endl;
			}
			else if (i == 2 && t.a != 0) {	//清空A
				t.a = 0;
			}
			else if (i == 3 && t.b != 0) {	//清空B
				t.b = 0;
			}
			else if (i == 4 && t.a != A) {	//B倒入A
				//	cout << t.a << " " << t.b << endl;
				if (A-t.a >= t.b) {	//a瓶可以装b瓶所有水
					t.a += t.b;
					t.b = 0;
				}
				else {	//B可以倒满A
					t.b = t.b - (A-t.a);
					t.a = A;
				}
				//cout << t.a << " " << t.b << endl;
			}
			else if (i == 5 && t.b != B) {	//A倒入B
				//cout << "&" << endl;
				if (B-t.b >= t.a) {
					t.b += t.a;
					t.a = 0;
				}
				else {
					t.a = t.a - (B-t.b);
					t.b = B;
				}
				//cout << s.a << " " << s.b << endl;
				//cout << t.a << " " << t.b << endl;
			}
			else {
				continue;
			}
			if (vis[t.a][t.b] == 1)	continue;
			//cout << t.a << t.b << endl;
			t.opt = s.opt+1;
			t.ok.push(i);
			vis[t.a][t.b] = 1;
			pq.push(t);
		}
	}
	cout << "impossible" << endl;
	return;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	if (C > max(A, B)) {
		cout << "impossible" << endl;
		return 0;
	}
	BFS(A, B, C);
	return 0;
}