#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 1010;
int pre[N], in[N], post[N], order[N], k;	//pre用来存先序，in用来存中序，post存后序，order保存后序遍历输出的顺序

typedef struct node {
	int value;
	node* l, * r;
	node(int value = 0, node * l = nullptr, node * r = nullptr) : value(value), l(l), r(r) {}
}* pnode;

void buildtree(pnode & root, int l, int r, int& p) {
	int flag = -1;
	for (int i = l; i <= r; i++) {
		if (pre[p] == in[i]) {	
			flag = i;
			break;
		}
	}
	if (flag == -1)	return;	//没有找到时说明已经成功建树
	root = new node(pre[p]);
	p++;
	if (flag > l)	buildtree(root->l, l, flag-1, p);	//说明左边还有子树,如果flag == r,说明左边没有子树了
	if (flag < r)	buildtree(root->r, flag+1, r, p);	//说明右边还有子树
	return;
}

void postorder(pnode root) {
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
		pnode root = new node;
		int p = 1;
		buildtree(root, 1, n, p);
		postorder(root);
		for (int i = 0; i < k; i++) {
			i == 0 ? cout << order[i] : cout << " " << order[i];
		}
		cout << endl;
		k = 0;
	}
	return 0;
}