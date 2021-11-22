#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		vector<int> num(n);
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}

		int prefixed = -1, suffixed = n;
		for (int i = 0; i < n; i++) {
			if (num[i] < i) {
				break;
			}
			prefixed = i;
		}

		for (int i = n-1; i >= 0; i--) {
			if (num[i] < n-1-i) {
				break;
			}
			suffixed = i;
		}

		if (prefixed >= suffixed) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
}