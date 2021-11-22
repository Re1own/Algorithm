#include <iostream>

using namespace std;

typedef long long ll;

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
		ll n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		ll first = (s.find('1') == s.npos? n: s.find('1'));	//找到第一个'1'出现的位置
		for (ll i = first+1; i < n; i++) {	//必须从第一个'1'出现的地方开始找'0',所以是从first+1开始！
			if (s[i] == '0') {
				if (i-first < m) {	//每次都和最近的第一个'1'换位置就行
					swap(s[i], s[first]);
					m -= (i-first);	//用完次数要减去距离
					first++;	//指向下一个'1'
				}	
				else {	//最理想的情况，只需要一次swap就完事
					swap(s[i], s[i-m]);
					break;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
