#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		string s, c;
		cin >> s >> c;
		if (s[0] < c[0]) {
			cout << s << endl;
		}
		else if (s == c) {
			cout << "---" << endl;
		}
		else if (s.length() == c.length()) {
			int len = s.length(), flag = 0, i = 0;
			for (i = 0; i < len; i++) {
				if (s[i] > c[i]) {
					for (int j = i+1; j < len; j++) {
						if (s[j] < c[i]) {
							swap(s[j], s[i]);
							flag = 1;
							break;
						}
					}
					if (flag == 0)
					cout << "---" << endl;
					break;
				}
			}
			if (flag)	cout << s << endl;
		}
		else if (s.length() < c.length()) {
			int len = s.length(), flag = 0;
			for (int i = 0; i < len; i++) {
				if (s[i] > c[i]) {
					for (int j = i+1; j < len; j++) {
						if (s[j] < c[i]) {
							swap(s[j], s[i]);
							flag = 1;
							cout << s << endl;
							break;
						}
					}
					if (flag == 0)
					cout << "---" << endl;
					break;
				}
			}
		}
		else {
			int len = c.length(), flag = 0;
			for (int i = 0; i < len; i++) {
				if (s[i] > c[i]) {
					for (int j = i+1; j < len; j++) {
						if (s[j] < c[i]) {
							swap(s[j], s[i]);
							flag = 1;
							cout << s << endl;
							break;
						}
					}
					if (flag == 0)
					cout << "---" << endl;
					break;
				}
				if (flag)	break;
			}
		}
	}
	return 0;
}