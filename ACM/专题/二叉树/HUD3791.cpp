#include <iostream>
#include <string>

using namespace std;

typedef struct node {
	char value;
	node* l, * r;
}* pnode;

char ans[100], ans1[100];
int k, k1;

void build_tree(pnode &root, char value) {
	if (root == nullptr) {
		root = new node;
		root->value = value;
		root->r = nullptr;
		root->l = nullptr;
		return;
	}
	else if (value < root->value) {
		build_tree(root->l, value);
	}
	else {
		build_tree(root->r, value);
	}
	return;
}

void pre(pnode root) {
	if (root != nullptr) {
		ans[k++] = root->value;
		pre(root->l);
		pre(root->r);
	}
	return;
}

void is_same1(pnode root) {
	if (root != nullptr) {
		ans1[k1++] = root->value;
		is_same1(root->l);
		is_same1(root->r);
	}
	return;
}

void remove_tree(pnode root) {
	if (root == nullptr)	return;
	remove_tree(root->l);
	remove_tree(root->r);
	delete root;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin >> n && n) {
		pnode root = new node;
		root = nullptr;	//一定不要忘记赋值！！！！
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			build_tree(root, s[i]);
		}
		pre(root);
		for (int i = 0; i < n; i++) {
			string t;
			pnode ok = new node;
			ok = nullptr;
			cin >> t;
			for (int j = 0; j < t.length(); j++) {
				build_tree(ok, t[j]);
			}
			is_same1(ok);
			int flag = 0;
			for (int j = 0; j < k; j++) {
				//cout << ans[j] << " " << ans1[j] << endl;
				if (ans1[j] != ans[j]) {
					//cout << ans1[j] << " " << ans[j] << endl;
					flag = 1;
					break;
				}
 			}
 			k1 = 0;
 			if (flag) {
 				cout << "NO" << endl;
 			}
 			else {
 				cout << "YES" << endl;
 			}
 			remove_tree(ok);
		}
		k = 0;
	}
	return 0;
}