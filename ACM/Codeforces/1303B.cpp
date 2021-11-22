#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		ll n, g, b;
		cin >> n >> g >> b;
		ll target = (n+1)/2;
		ll goodday = target/g*(g+b);
		if (target % g == 0) {
			cout << max(goodday - b, n) << endl;
			//cout <<'#' << endl;
		}
		else {
			cout << max(n,goodday + target%g) << endl;
		}
	}
	return 0;
}