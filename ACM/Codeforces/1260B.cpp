#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int a, b;
		cin >> a >> b;
		if (max(a,b) > 2*min(a, b)) {
			cout << "NO" << endl;
		}
		else {
			if ((a+b)%3 == 0) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}