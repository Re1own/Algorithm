#include <iostream>
#include <vector>

using namespace std;

const int maxn = 1e5+5;
int a[maxn];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int f;
	for (int i = 31; i >= 0; i--) {
		int cnt[2] = {0,0};
		for (int j = 0; j < n; j++) {
			if ((num[j]>>i)&1) {
				cnt[1]++;
			}
		}
		if (cnt[1] == 1) {
			f = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if ((num[i]>>f)&1 == 1) {
			f = i;
			cout << num[f];
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (i != f) {
			cout << " " << num[i]; 
		}
	}
	return 0;
}