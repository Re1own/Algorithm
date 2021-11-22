#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		string str;
		cin >> str;
		vector<int> position;
		string s1 = "twone", s2 = "one", s3 = "two";
		int p = 0;
		while((p = str.find(s1, p)) != str.npos) {
			position.push_back(p+3);
			str[p+2] = '1';
			p++;
		}
		p = 0;
		while((p = str.find(s2, p)) != str.npos) {
			position.push_back(p+2);
			str[p+1] = '1';
			p++;
		}
		p = 0;
		while((p = str.find(s3, p)) != str.npos) {
			position.push_back(p+2);
			str[p+1] = '1';
			p++;
		}
		cout << position.size() << endl;
		for (int i = 0; i < position.size(); i++) {
			if (i == 0)	cout << position[i];
			else	cout << " " << position[i];
		}
		cout << endl;
	}
}