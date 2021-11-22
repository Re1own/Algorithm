#include <iostream>
#include <cmath>

using namespace std;

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
		int a, b, times = 0;
		cin >> a >> b;
		int det = abs(a-b);
		cout << det/5 + det%5/2 + det%5%2 << endl;
	}
	return 0;
}