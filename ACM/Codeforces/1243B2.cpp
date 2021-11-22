#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

typedef pair<char,int> cp;
typedef pair<int, int> pp;

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
		vector<pp> ans;
		int book[27];
		memset(book, 0, sizeof(book));
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0; i < n; i++) {
			book[s1[i]-'a']++;
			book[s2[i]-'a']++;
		}
		int flag = 0;
		for (int i = 0; i < 27; i++) {
			if (book[i]%2 != 0) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << "No" << endl;
			continue;
		}
		for (int i = 0; i < n; i++) {
			if (s1[i] != s2[i]) {
				for (int j = i+1; j < n; j++) {
					if (s1[i] == s1[j]) {
						ans.push_back(make_pair<int,int>(j+1, i+1));
						swap(s1[j],s2[i]);
						break;
					}
					if (s1[i] == s2[j]) {
						swap(s2[j], s1[j]);
						swap(s2[i], s1[j]);
						ans.push_back(pp(j+1,j+1));
						ans.push_back(pp(j+1,i+1));
						break;
					}
				}
			}
		}
		cout << "Yes" << endl << ans.size() << endl;
		for (auto i : ans) {
			cout << i.first << " " << i.second << endl;
		}

	}
	return 0;
}