#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef long long ll;

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
int main(void) {
	BUFF();
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	map<char, ll> hash;
	for (ll i = 0; i < k; i++) {
		char ch;
		 cin >> ch;
		 hash[ch] = 1;
	}
	ll len = s.length(), p = 0, ans = 0;
	for (ll i = 0; i < len; i++) {
		if (hash[s[i]] != 1) {
			ans += (p+1)*p/2;
			p = 0;
		}
		else {
			p++;
		}
	}
	cout << ans + (p+1)*p/2 << endl;
	return 0;
}