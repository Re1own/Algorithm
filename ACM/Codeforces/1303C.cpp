#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

string str, s;

void dfs(int p) {
	if (p >= )
	dfs(p-1);
	dfs(p+1);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		map<char, int> vis;
		cin >> str;
		int len = str.length()*2;
		s = "";
		for (int i = 0; i < len; i++) {
			s += '#';
		}
		int p = len/2, flag = 1, times = 0;
	}

	return 0;
}