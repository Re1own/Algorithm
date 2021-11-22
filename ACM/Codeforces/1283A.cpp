#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int h, m;
		cin >> h >> m;
		cout << (24-h)*60-m << endl;
	}
	return 0;
}