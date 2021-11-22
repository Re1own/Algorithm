#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= n && a[i] >= 1)	mp[a[i]]++;
	}
	if (n == 1) {
		cout << 1;
		return 0;
	}
	set<int> none;
	for (int i = 1; i <= n; i++) {
		if (mp[i] == 0) {
			none.insert(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (i != 0)	cout << " ";
		if (mp[a[i]] == 1) {
			cout << a[i];
		}
		else {
			for (auto f : none) {
				cout << f;
				none.erase(f);
				mp[a[i]]--;
				break;
			}
		}
	}
}