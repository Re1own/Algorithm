#include <iostream>

using namespace std;

const int maxn = 50;
int s[maxn], book[maxn];

void init() {
	for (int i = 0; i <= maxn; i++) {
		s[i] = i;
	}
}
int find_set(int x) {
	if (x != s[x])	return s[x] = find_set(s[x]);
	else	return x;
}

void union_set(int x, int y) {
	x = find_set(x);
	y = find_set(y);
	if (x != y) {
		s[x] = s[y];
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	init();
	while(n--) {
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			book[str[i]-'a'] = 1;
			union_set(str[0]-'a', str[i]-'a');
		}
	}
	int cnt = 0;
	for (int i = 0; i < 50; i++) {
		if (book[i] == 1 && s[i] == i) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;	
}