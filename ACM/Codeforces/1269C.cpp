#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	int flag = 0;
	for (int i = 0; i+k < str.length(); i++) {
		if (str[i] != str[i+k]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		int p = k-1, tflag = 0;
		for (int i = p; i >= 0; i--) {
			if (str[i] != '9') {
				str[i]++;
				tflag = 1;
				break;
			}
			else {
				str[i] = '0';
			}
		}
		if (tflag == 1) {
			cout << n << endl;
			for (int i = 0; i+k < str.length(); i++) {
				str[i+k] = str[i];
			}
			cout << str << endl;
		}
		else {
			int beishu = 0;
			cout << n + 1 << endl;
			cout << '1';
			for (int i = 0; i < str.length(); i++) {
				if ((i+1)%k == 0) {
					cout << '1';
				}
				else {
					cout << '0';
				}
			}
			cout << endl;
		}
	}
	else {
		cout << n << endl;
		cout << str << endl;
	}
	return 0;
}