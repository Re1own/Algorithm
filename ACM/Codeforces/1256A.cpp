#include <iostream>

using namespace std;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	hasten();
	int q;
	cin >> q;
	while(q--) {
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		if (1ll*a*n + b >= s && s%n <= b)	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
	return 0;
}