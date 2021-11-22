#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, a, b, k, ans = 0;
	cin >> n >> a >> b >> k;
	vector<int> times;
	while(n--) {
		int hp;
		cin >> hp;
		hp %= (a+b);
		if (hp == 0)	hp = a+b;
		hp = (hp + a - 1)/a - 1;	//排除a = a, b = 0,此时跳过次数应该为零
		times.push_back(hp);
	}
	sort(times.begin(), times.end());
	for (int i = 0; i < times.size(); i++) {
		if (k >= times[i]) {
			ans++;
			k -= times[i];
		}
		else {
			break;
		}
	}
	cout << ans << endl;
	return 0;
}