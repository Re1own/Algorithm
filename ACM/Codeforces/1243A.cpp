#include <iostream>
#include <vector>

using namespace std;

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
		int n;
		cin >> n;
		vector<int> num(n+1);
		for (int i = 0; i < n; i++) {
			int t;
			cin >> t;
			num[t]++;
		}
		for (int i = n; i >= 1; i--) {
			int sum = 0;
			for (int j = n; j > i; j--) {
				sum += num[j];
			}
			if (num[i]+sum >= i) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
