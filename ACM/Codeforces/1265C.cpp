#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

const int INF = 1<<29;

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
		int n;
		cin >> n;
		map<int, int> cnt;
		vector<int> number;
		for (int i = 0; i < n; i++) {
			int t;
			cin >> t;
			cnt[t]++;
			if (cnt[t] == 1)	number.emplace_back(t);
		}
		if (n <= 3) {
			cout << "0 0 0" << endl;
			continue;
		}
		//number.erase(unique(number.begin(), number.end()), number.end());
		int a1 = cnt[number[0]], a2 = 0, a3 = 0, p = 1;
		for (int i = 1; i < number.size(); i++) {
			if (a2 <= a1) {
				a2 += cnt[number[i]];
			}
			else {
				p = i;
				break;
			}
		}
		for (int i = p; i < number.size(); i++) {
			if (a3 <= a1) {
				a3 += cnt[number[i]];
			}
			else {
				p = i;
				break;
			}
		}
		//cout << cnt[number[p]] << endl;
		for (int i = p; a1 + a2 + a3 + cnt[number[i]] <= n/2; i++) {
			a3 += cnt[number[i]];
		}
		if (a3 == 0 || a2 == 0 || a1 == 0) {
			cout << "0 0 0" << endl;
		}
		else {
			if (a1 + a2 + a3 > n/2) {
				cout << "0 0 0" << endl;
			}
			else {
				cout << a1 << " " << a2 << " " << a3 << endl;
			}
		}
	}
	return 0;
}