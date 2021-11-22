#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		string s, s1 = "op", s2 = "used", s3 = "usam", s4 = "adinm";
		cin >> s;
		reverse(s.begin(), s.end());
		//cout << s << endl;
		if (s.find(s1) != s.npos && s.find(s1) == 0) {
			cout << "FILIPINO" << endl;
		}
		else if (s.find(s2) != s.npos && s.find(s2) == 0) {
			cout << "JAPANESE" << endl;
		}
		else if (s.find(s3) != s.npos && s.find(s3) == 0) {
			cout << "JAPANESE" << endl;
		}
		else if (s.find(s4) != s.npos && s.find(s4) == 0) {
			cout << "KOREAN" << endl;
		}
	}
}