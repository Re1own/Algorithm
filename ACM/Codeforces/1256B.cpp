#include <iostream>
#include <cstring>
#include <algorithm>
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
		int n, m;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			a[i]--;
		}
		int pos = 0;
		while(pos < n) {
			int start = min_element(a.begin()+pos, a.end())-a.begin();
			int min_ = a[start];
			a.erase(a.begin()+start);
			a.insert(a.begin()+pos, min_);
			if (pos == start)	pos = start+1;
			else	pos = start;
		}
		for (auto i : a) {
			cout << i + 1 << " ";
		}
		cout << endl;
	}

	return 0;
}