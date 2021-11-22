#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

struct node {
	map<int, int> ref;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	node save[n];
	map<char, int> ch;
	ch['S'] = 0, ch['E'] = 1, ch['T'] = 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			char c;
			cin >> c;
			save[i].ref[c] = j;
		}
	}
	ll ans = 0;
	for (int i = 0; i < k; i++) {
		for ()
	}
	return 0;
}