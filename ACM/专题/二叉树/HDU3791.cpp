#include <iostream>
#include <cstring>

using namespace std;

int TREE[10005], tree[10005];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin >> n && n) {
		string ans;
		cin >> ans;
		memset(TREE, -1, sizeof(TREE));
		for (int i = 0; i < ans.length(); i++) {
			int p = 0;	//要赋值为起点0！！！！
			int temp = ans[i]-'0';
			while(TREE[p] != -1) {
				if (TREE[p] > temp) {
					p = p*2 + 1;
				}
				else {
					p = p*2 + 2;
				}
			}
			TREE[p] = temp;
		}
		for (int i = 0; i < n; i++) {
			string t;
			cin >> t;
			memset(tree, -1, sizeof(tree));
			for (int j = 0; j < t.length(); j++) {
				int p = 0;
				int temp = t[j] - '0';
				while(tree[p] != -1) {
					if (tree[p] > temp) {
						p = p*2 + 1;
					}
					else {
						p = p*2 + 2;
					}
				}
				tree[p] = temp;
			}
			int flag = 0;
			for (int j = 0; j < 10005; j++) {
				if (TREE[j] != tree[j]) {
					flag = 1;
					break;
				}
			}
			if (flag)	cout << "NO" << endl;
			else {
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}