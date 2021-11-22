#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
 
int main(void) {
	hasten();
	int T;
	cin >> T;
	while(T--) {
		int n, r, p, s;
		cin >> n >> r >> p >> s;
		string str;
		cin >> str;
		for (int i = 0; i < n; i++) {
			if (str[i] == 'R' && p) {
				str[i] = 'P';
				p--;
			}
			else if (str[i] == 'P' && s) {
				str[i] = 'S';
				s--;
			}
			else if (str[i] == 'S' && r) {
				str[i] = 'R';
				r--;
			}
			else {
				str[i] = '#';
			}
		}
		if ((r+s+p) <= n/2) {	
			cout << "YES" << endl;
			for (int i = 0; i < n; i++) {
				if (str[i] == '#') {
					if (r) {
						cout << 'R';
						r--;
					}
					else if (s) {
						cout << 'S';
						s--;
					}
					else if (p)	{
						cout << 'P';
						p--;
					}
				}
				else {
					cout << str[i];
				}
			}
			cout << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}
	return 0;
}
