#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 1010;
int pre[N], in[N], post[N], k, order[N];	//pre用来存先序，in用来存中序，post存后序，order保存后序遍历输出的顺序

typedef struct node {
	node * l, * r;
	int value;
	node(int value = 0, node * l = nullptr, node * r = nullptr) : value(value), l(l), r(r) {}
}* pnode;

void buildtree(int l, int r, int &t, node * &root) {
	int flag = -1;
	for (int i = l; i <= r; i++) {
		if (in[i] == pre[t]) {
			flag = i;
			break;
		}
	}
	if (flag == -1)	return;	//如果找不到了那么说明已经建完了
	root = new node(in[flag]);
	t++;	//依次找先序的点
	if (flag > l)	buildtree(l, flag-1, t, root->l);
	if (flag < r)	buildtree(flag+1, r, t, root->r);
	return;
}

void postorder(node * root) {
	if (root != nullptr) {
		postorder(root->l);
		postorder(root->r);
		order[k++] = root->value;
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin >> n) {
		for (int i = 1; i <= n; i++) {
			cin >> pre[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> in[i];
		}
		pnode root = (pnode)malloc(sizeof(node));
		int t = 1;
		buildtree(1, n, t, root);
		k = 0;
		postorder(root);
		for (int i = 0; i < k; i++) {
			if (i == 0)	cout << order[i];
			else	cout << " " << order[i];
		}
		cout << endl;
	}
	return 0;
}