#include <iostream>
#include <queue>
#include <map>

using namespace std;

typedef pair<int,int> pii;

bool judge_prime(int num) {
	if (num == 2 || num == 3)	return true;
	if (num < 2 || num % 2 == 0)	return false;
	for (int i = 3; i*i <= num; i += 2) {
		if (num % i == 0)	return false;
	}
	return true;
}

void BFS(int a, int b) {
	queue<pii> pq;
	map<int, int> vis;
	pq.push(make_pair(a, 0));
	while(!pq.empty()) {
		pii t = pq.front();
		vis[t.first] = 1;
		pq.pop();
		if (t.first == b) {
			cout << t.second << endl;
			return;
		}
		for (int i = 0; i <= 9; i++) {	//改个位
			int temp = t.first/10;
			temp = temp*10 + i;
			if (vis[temp] == 0 && judge_prime(temp) == true) {
				pq.push(make_pair(temp, t.second+1));
				vis[temp] = 1;
			}
		}
		for (int i = 0; i <= 9; i++) {	//改十位
			int temp1 = t.first%10, temp2 = t.first/100;
			int temp = temp2*100 + i*10 + temp1;
			if (vis[temp] == 0 && judge_prime(temp) == true) {
				pq.push(make_pair(temp, t.second+1));
				vis[temp] = 1;
			}
		}
		for (int i = 0; i <= 9; i++) {
			int temp1 = t.first%100, temp2 = t.first/1000;
			int temp = temp2*1000 + i*100 + temp1;
			if (vis[temp] == 0 && judge_prime(temp) == true) {
				pq.push(make_pair(temp, t.second+1));
				vis[temp] = 1;
			}
		}
		for (int i = 1; i <= 9; i++) {
			int temp1 = t.first%1000;
			int temp = i*1000 + temp1;
			if (vis[temp] == 0 && judge_prime(temp) == true) {
				pq.push(make_pair(temp, t.second+1));
				vis[temp] = 1;
			}
		}
		//cout << t.first << endl;
	}
	cout << "Impossible" << endl;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int a, b;
		cin >> a >> b;
		if (judge_prime(b) == false) {
			cout << "Impossible" << endl;
			continue;
		}
		BFS(a, b);
	}
	return 0;
}