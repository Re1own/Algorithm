#include <iostream>

using namespace std;

/*typedef struct node {
	int value;
	node * l, * r;
	node (int value = 0, node * l = nullptr, node * r = nullptr) : value(value), l(l), r(r) {}
}* pnode;

void create_tree(pnode & root, int value) {
	if (root == nullptr) {
		root = new node;
		root->value = value;
		root->l = root->r = nullptr;
	}
	else if (root->value > value) {
		create_tree(root->l, value);
	}
	else {
		create_tree(root->r, value);
	}
}

void print_BTree(pnode root) {
	if (root != nullptr) {
		cout << root->value << " ";
		print_BTree(root->l);
		print_BTree(root->r);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	pnode root = new node;
	root = nullptr;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		create_tree(root, t);
	}
	print_BTree(root);
	return 0;
}*/


