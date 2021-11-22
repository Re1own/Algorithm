#include <iostream>
#include <set>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	set<pii> ans;
	int q, x;
	cin >> q >> x;
	vector<int> num(x);
	for (int i = 0; i < x; i++) {
		ans.insert(make_pair(num[i], i));
	}
	while(q--) {
		int cur;
		cin >> cur;
		cur %= x;
		ans.erase(make_pair(num[cur], cur));
		num[cur]++;	//++是因为倍数的缘故，"a+num[a]*x“
		ans.insert(make_pair(num[cur], cur));
		cout << ans.begin()->first*x + ans.begin()->second << endl;
	}
	return 0;
}