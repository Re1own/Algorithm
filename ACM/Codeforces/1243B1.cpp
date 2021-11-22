#include <iostream>
#include <set>

using namespace std;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	int q;
	cin >> q;
	while(q--) {
		set<char> a, b;
		string s, t;
		int len;
		cin >> len >> s >> t;
		int times = 0;
		if (s == t) {
			cout << "Yes" << endl;
			continue;
		}
		for (int i = 0; i < len; i++) {
			if (s[i] != t[i]) {
				a.insert(s[i]);
				b.insert(t[i]);
				times++;
			}
		}
		if (times > 2) {
			cout << "No" << endl;
		}
		else {
			if (a.size() == 1 && b.size() == 1 && times == 2) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
}