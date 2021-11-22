#include <iostream>
 
using namespace std;
 
const int maxn = 2e5+5;
int p[maxn];
 
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		int n;
		cin >> n;
		int a[n+2];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			p[a[i]] = i;
		}
		a[0] = a[n+1] = n+1;
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			int start = p[i];
			cnt++;
			if (i > a[start-1])	cnt--;
			if (i > a[start+1])	cnt--;
			if (cnt == 1)	cout << 1;
			else	cout << 0;
		}
		cout << endl;
	}
 
	return 0;
}