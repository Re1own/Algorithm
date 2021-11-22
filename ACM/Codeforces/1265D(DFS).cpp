#include <iostream>
#include <cmath>

using namespace std;

const int maxn = 1e5 + 5;
int n, flag;
int Hash[4], ans[maxn];

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void DFS(int point, int step) {
	if (step == n) {
		flag = 1;
		//cout << '&' << endl;
		return;
	}
	for (int i = 0; i <= 3; i++) {
		if (abs(point-i) == 1 && Hash[i]) {
			//cout << i << " " << step << endl;
			Hash[i]--;
			ans[step+1] = i;
			DFS(i, step+1);
			Hash[i]++;
			//cout << i << endl;
			return;	//反正都必须消耗掉，找到一个满足的就可以贪心得把它消耗掉，开头决定一切!
		}
	}
	return;
}

int main(void) {
	BUFF();
	for (int i = 0; i <= 3; i++) {
		cin >> Hash[i];
		n += Hash[i];
	}
	//cout << n << endl;
	for (int i = 0; i <= 3; i++) {
		if (Hash[i] == 0)	continue;
		Hash[i]--;
		ans[1] = i;
		DFS(i, 1);
		Hash[i]++;
		//cout << i << endl;
		if (flag)	break;
	}
	if (flag == 0)	cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		for (int i = 1; i <= n; i++) {
			if (i != 1)	cout << " " << ans[i];
			else {
				cout << ans[i];
			}
		}
		cout << endl;
	}
	return 0;
}
