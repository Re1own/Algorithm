#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1000000001;

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	BUFF();
	int T;
	cin >> T;
	while(T--) {
		int x, y, n, ans_x = -1, ans_y = INF;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			ans_x = max(x, ans_x);
			ans_y = min(y, ans_y);
		}
		cout << max(0, ans_x-ans_y) << endl;
	}
	return 0;
}