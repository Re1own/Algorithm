#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> pp;

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
int main(void) {
	BUFF();
	int T;
	cin >> T;
	while(T--) {
		int n, m;
		cin >> n >> m;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (n == 2) {
			cout << -1 << endl;
			continue;
		}
		if (n > m) {
			cout << -1 << endl;
			continue;
		}
		vector<pp> ans;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (i != n-1) {
				sum += (a[i+1] + a[i]);
				ans.push_back(pp(i+1, i+2));
			}	
			else {
				ans.push_back(pp(i+1, 1));
				sum += (a[0] + a[i]);
			}	
		}
		cout << sum << endl;
		for (auto i : ans) {
			cout << i.first << " " << i.second << endl;
		}
	}
	return 0;
}