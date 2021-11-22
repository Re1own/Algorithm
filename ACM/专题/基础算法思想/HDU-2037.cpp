#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
	int start, end;
};

bool cmp(const node& a, const node& b) {
	return a.end < b.end;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin >> n && n) {
		vector<node> A(n);
		for (int i = 0; i < n; i++) {
			cin >> A[i].start >> A[i].end;
		}
		sort(A.begin(), A.end(), cmp);
		int cnt = 0, time = -1;
		for (int i = 0; i < n; i++) {
			if (A[i].start >= time) {
				time = A[i].end;
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}