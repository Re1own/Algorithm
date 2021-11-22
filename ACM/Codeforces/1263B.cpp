#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<string, int> Hash;

string change(string s) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 9; j++) {
			string t = s;
			t[i] = '0'+j;
			if (Hash[t] == 0) {
				Hash[t]++;
				return t;
			}
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		vector<string> s;
		for (int i = 0; i < n; i++) {
			string t;
			cin >> t;
			s.push_back(t);
			Hash[t]++;
		}
		//sort(s.begin(), s.end());
		int cnt = 0;
		map<string, int> first;
		for (int i = 0; i < s.size(); i++) {
			first[s[i]]++;
			if (Hash[s[i]] > 1 && first[s[i]] > 1) {
				s[i] = change(s[i]);
				cnt++;
			}
		}
		cout << cnt << endl;
		for (int i = 0; i < s.size(); i++) {
			cout << s[i] << endl;
		}
	}
	return 0;
}