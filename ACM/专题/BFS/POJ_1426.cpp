#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long ll;

void BFS(ll num) {
	queue<ll> ans;
	ll start = 1;
	ans.push(start);
	while(!ans.empty()) {
		ll t = ans.front();
		ans.pop();
		if (t % num == 0) {
			cout << t << endl;
			return;
		}
		else {
			ans.push(t*10);
			ans.push(t*10+1);
		}
	}
} 
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	while(cin >> n && n) {
		BFS(n);
	}
	return 0;
}