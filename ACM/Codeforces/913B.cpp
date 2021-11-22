#include <iostream>
#include <vector>

using namespace std;

void BUFF_FAST(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

struct tree {
	tree* pnext;
	int number;

};

int main(void) {
	BUFF_FAST();
	int t;
	cin >> t;
	vector<int> a(t), b(t);
	for (int i = 1; i < t; i++) {
		cin >> a[i];
		a[i]--;
		b[a[i]]++;	//统计出现的次数
	}
	vector<int> son(t);
	for (int i = 0; i < t; i++) {
		if (b[i] == 0) {	//判断i是否为叶子,a[i]对应为它的根
			son[a[i]]++;	//增加a[i]的儿子数
		}
	}
	for (int i = 0; i < t; i++) {
		if (son[i] < 3 && b[i] > 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}