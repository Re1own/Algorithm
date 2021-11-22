#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

ll gcd(ll a, ll b) {
	return (b == 0? a : gcd(b, a%b));
}
int main(void) {
	BUFF();
	ll n, cnt = 0, t;
	cin >> n;
	vector<ll> d;
	for (ll i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			d.push_back(i);
			d.push_back(n/i);
		}
	}
	for (auto i : d) {
		n = gcd(i, n);
	}
	cout << n << endl;
	return 0;
}