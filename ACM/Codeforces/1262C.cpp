#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

typedef pair<int,int> pp;

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
		int len, n;
		cin >> len >> n;
		string str, ans = "";
		cin >> str;
		for (int i = 0; i < n-1; i++) {
			ans += "()";
		}
		int tlen = len-(n-1)*2;
		for (int i = 0; i < tlen/2; i++) {
			ans += "(";
		}
		for (int i = 0; i < tlen/2; i++) {
			ans += ")";
		}
		vector<pp> answer;
		for (int i = 0; i < len; i++) {
			if (str[i] != ans[i]) {
				int k = str.find(ans[i], i);
				//cout << i + 1 << endl;
				reverse(str.begin()+i, str.begin()+k+1);
				answer.push_back(pp(i+1, k+1));
			}
		}
		int cnt = answer.size();
		cout << cnt << endl;
		for (auto i : answer) {
			cout << i.first << " " << i.second << endl;
		}
	}
	return 0;
}