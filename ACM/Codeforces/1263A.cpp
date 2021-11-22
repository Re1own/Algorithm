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
		int a[3], cnt = 0;
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if (a[0] + a[1] <= a[2]) {
			cout << a[0] + a[1] << endl;
		}	
		else {
			cout << (a[1]+a[0]-a[2])/2 + a[2] << endl;
		}
	}
	return 0;
}