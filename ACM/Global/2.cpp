#include <iostream>
#include <vector>
#include <map>

using namespace std;

void hasten(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
int main(void) {
	hasten();
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, int> position;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		position[b[i]] = i;
	}
	int mx = -1, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (mx < position[a[i]]) {
			mx = position[a[i]];
		}
		else {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}