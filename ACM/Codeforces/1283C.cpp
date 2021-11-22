#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> num(n);
	map<int, int> vis;
	vector<int> index, in;	//index表示可以填的index, in表示可以填的数
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		//vis[num[i]] = 1;
		if (num[i] == 0) {
			index.push_back(i+1);
		}
		else {
			vis[num[i]] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			in.push_back(i);
		}
	}
	sort(index.begin(), index.end());
	int len = in.size();
	for (int i = 0; i < len; i++) {
		if (index[i] == in[i]) {
			swap(in[i], in[(i+1)%len]);
		}
	}
	for (int i = 0; i < len; i++) {
		num[index[i]-1] = in[i];
	}
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}
