#include <iostream>
#include <vector>

using namespace std;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

typedef struct tree {
	char date;
	tree* left;
	tree* right;
}* ptree;

ptree insert_date(ptree node, char date) {
	if (node == nullptr) {
		ptree t = new tree;
		t->date = date;
		t->left = nullptr;
		t->right = nullptr;
		return t;
	}
	else if (date < node->date) {
		node->right = insert_date(node->right, date);
	}
	else {
		node->left = insert_date(node->left, date);
	}
	return node;
}

void print(ptree father, vector<char>& num) {
	if (father != nullptr) {
		num.emplace_back(father->date);
		print(father->left, num);
		print(father->right, num);
	}
}
int main(void) {
	hasten();
	int q;
	while(scanf("%d",&q) != EOF && q) {
		string s;
		cin >> s;
		ptree ans = new tree;
		for (int i = 0; i < s.length(); i++) {
			insert_date(ans, s[i]);
		}
		while(q--) {
			string t;
			cin >> t;
			ptree father = new tree;
			for (int i = 0; i < t.length(); i++) {
				insert_date(father, t[i]);
			}
			vector<char> num1, num2;
			int flag = 0;
			print(ans, num1), print(father, num2);
			for (int i = 0; i < t.length(); i++) {
				if (num2[i] != num1[i]) {
					flag = 1;
					break;
				}
			}
			if (flag)	cout << "NO" << endl;
			else	cout << "YES" << endl;
		}
	}

	return 0;
}