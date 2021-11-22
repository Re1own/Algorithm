#include <iostream>

using namespace std;

int father[1005];


int get_father(int son) {
	if (son == father[son])	return son;
	else	return father[son] = get_father(father[son]);
}

void merge_son(int x, int y) {
	int tx = get_father(x), ty = get_father(y);
	if (father[tx] != father[ty]) {
		father[tx] = ty;
	}
}

void init_father(void) {
	for (int i = 0; i < 1005; i++) {
		father[i] = i;
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		init_father();
		int N, M;
		cin >> N >> M;
		while(M--) {
			int x, y;
			cin >> x >> y;
			merge_son(x, y);
		}
		int ans = 0;
		for (int i = 1; i <= N; i++) {
			if (father[i] == i)	ans++;
		}
		cout << ans << endl;
	}
	return 0;
}