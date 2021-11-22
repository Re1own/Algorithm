#include <iostream>
#include <map>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		map<char, int> cnt;
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			cnt[s[i]]++;
		}
		if (cnt['U'] == 0 || cnt['D'] == 0) {
			if (cnt['L'] == 0 || cnt['R'] == 0) {
				cout << 0 << endl;
				cout << "\n" << endl;
			}
			else {
				cout << 2 << endl;
				cout << "LR" << endl;
			}
		}
		else if (cnt['L'] == 0 || cnt['R'] == 0) {
			if (cnt['U'] == 0 || cnt['D'] == 0) {
				cout << 0 << endl;
				cout << "\n" << endl;
			}
			else {
				cout << 2 << endl;
				cout << "UD" << endl;
			}
		}
		else {
			int ans = min(cnt['L'], cnt['R'])*2 + min(cnt['U'], cnt['D'])*2;
			cout << ans << endl;
			for (int i = 0; i < min(cnt['L'], cnt['R']); i++) {
				cout << 'R';
			}
			for (int i = 0; i < min(cnt['U'], cnt['D']); i++) {
				cout << 'U';
			}
			for (int i = 0; i < min(cnt['L'], cnt['R']); i++) {
				cout << 'L';
			}
			for (int i = 0; i < min(cnt['U'], cnt['D']); i++) {
				cout << 'D';
			}
			cout << endl;
		}
	}
}