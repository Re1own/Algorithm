#include <iostream>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		ll n, k;
		cin >> n >> k;
		ll sum = 0;
		sum = (n/k) * k;
		if (n%k > k/2) {
			sum += k/2;
		}
		else {
			sum += n%k;
		}
		cout << sum << endl;

	}
	return 0;
}