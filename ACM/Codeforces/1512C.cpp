#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while(t--) {
		int a, b, ta = 0, tb = 0, tc = 0, flag = 0;
		cin >> a >> b;
		string s;
		cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] == '0') {
				ta++;
			}
			else if (s[i] == '1') {
				tb++;
			}
			else {
				tc++;
			}
		}
		if (ta > a || tb > b || a + b != len) {
			cout << -1 << endl;
			continue;
		}
		a -= ta;
		b -= tb;
		int i = 0, j = len-1;
		while(i <= j) {
			if (i == j) {
				if (s[i] == '?') {
					if (a > b) {
						s[i] = '0';
						a--;
					}
					else {
						s[i] = '1';
						b--;
					}
				}
	
			}
			else if (s[i] != '?' && s[j] == '?') {
				if (s[i] == '0') {
					s[j] = '0';
					a--;
				}
				else {
					s[j] = '1';
					b--;
				}
			}
			else if (s[i] == '?' && s[j] != '?') {
				if (s[j] == '0') {
					s[i] = '0';
					a--;
				}
				else {
					s[i] = '1';
					b--;
				}
			}
			else if (s[i] == '?' && s[j] == '?') {
				int det;
				if (i == j) {
					det = 1;
				}
				else {
					det = 2;
				}
				if (a > b) {
					s[i] = s[j] = '0';
					a -= det;
					// cout << "#" << endl;
				}
				else {
					s[i] = s[j] = '1';
					b -= det;
					// cout << "%" << endl;
				}
			}
			else if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) {
				flag = 1;
				break;
			}
			i++;
			j--;
			if (a < 0 || b < 0) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << -1 << endl;
		}
		else {
			cout << s << endl;
		}
	}

	return 0;
}