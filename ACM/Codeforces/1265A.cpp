#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

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
		string s;
		cin >> s;
		int flag = 1;
		for (int i = 0; i < s.length(); i++) {
			if (i > 0 && s[i] == s[i-1] && s[i] != '?') {
				cout << -1 << endl;
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			for (int i = 0; i < s.length(); i++) {
				if (s[i] != '?') {
					continue;
				}
				else if (i > 0 && i < s.length()-1) {
					if (s[i-1] == 'a' && s[i+1] == 'a') {
						s[i] = 'b';
					}
					else if (s[i-1] == 'b' && s[i+1] == 'b') {
						s[i] = 'a';
					}
					else if (s[i-1] == 'c' && s[i+1] == 'c') {
						s[i] = 'b';
					}
					else if (s[i-1] == 'a' && s[i+1] == 'b') {
						s[i] = 'c';
					}
					else if (s[i-1] == 'b' && s[i+1] == 'a') {
						s[i] = 'c';
					}
					else if (s[i-1] == 'a' && s[i+1] == 'c') {
						s[i] = 'b';
					}
					else if (s[i-1] == 'c' && s[i+1] == 'a') {
						s[i] = 'b';
					}
					else if (s[i-1]== 'b' && s[i+1] == 'c') {
						s[i] = 'a';
					}
					else if (s[i-1] == 'c' && s[i+1] == 'b') {
						s[i] = 'a';
					}
					else if (s[i-1] == 'a') {
						s[i] = 'b';
					}
					else if (s[i-1] == 'b') {
						s[i] = 'c';
					}
					else if (s[i-1] == 'c') {
						s[i] = 'a';
					}
				}
				else if (i == 0) {
					if (s[i+1] == 'a')	s[i] = 'b';
					else if (s[i+1] == 'b')	s[i] = 'c';
					else if (s[i+1] == 'c')	s[i] = 'a';
					else {
						s[i] = 'a';
					}
				}
				else if (i == s.length()-1) {
					if (s[i-1] == 'a')	s[i] = 'b';
					else if (s[i-1] == 'b')	s[i] = 'c';
					else {
						s[i] = 'a';
					}
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}
