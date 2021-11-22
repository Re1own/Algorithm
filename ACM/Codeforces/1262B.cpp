#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int maxn = 1e5+5;
int book[maxn];

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	BUFF();
	int q;
	cin >> q;
	while(q--) {
		int n, flag = 1;
		cin >> n;
		vector<int> num(n);
		set<int> ans;
		vector<int> permutation;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
			book[i+1] = 0;
			ans.insert(i+1);
		}
		for (int i = 0; i < n; i++) {
			if (book[num[i]] == 0) {
				permutation.emplace_back(num[i]);
				book[num[i]] = 1;
				ans.erase(num[i]);
			}
			else {
				for (auto f : ans) {
					if (f < num[i]) {
						permutation.emplace_back(f);
						book[f] = 1;
						ans.erase(f);
						break;
					}
					else {
						cout << -1;
						flag = 0;
						break;
					}
				}
			}
			if (flag == 0)	break;
		}
		if (flag) {
			for (int i = 0; i < permutation.size(); i++) {
				if (i != 0)	cout << " ";
				cout << permutation[i];
			}
		}
		cout << endl;

	}
	return 0;
}