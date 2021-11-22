#include <iostream>
#include <cmath>
#include <map>
#include <string>

using namespace std;

void BUFF(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(void) {
	BUFF();
	map<int, int> hash;
	for (int i = 0; i <= 3; i++) {
		cin >> hash[i];
	}
	string ans = "";
	int flag = 1;
	if (hash[0] == hash[1]) {
		for (int i = 0; i < hash[0]; i++) {
			if (i != 0)	ans += " ";
			ans += "0 1";
		}
	}
	else if (hash[0] + 1 == hash[1]) {
		ans += "1 ";
		for (int i = 0; i < hash[0]; i++) {
			if (i != 0)	ans += " ";
			ans += "0 1";
		}
	}
	else if (hash[1] > hash[0] && hash[2]) {
		for (int i = 0; i < hash[0]; i++) {
			if (i != 0)	ans += " ";
			ans += "0 1";
		}
		hash[1] -= hash[0];
		if (hash[1]) {
			for (int i = 0; i < hash[1]; i++) {
				ans += " 2";
			}
			hash[2] -= hash[1];
		}
	}
	else {
		cout << "NO" << endl;
		return 0;
	}
	if (hash[2] == hash[3]) {
		for (int i = 0; i < hash[2]; i++) {
			ans += " 2 3";
		}
	}
	else if (hash[2] == hash[3] + 1) {
		for (int i = 0; i < hash[3]; i++) {
			ans += " 2 3";
		}
		ans += " 2";
	}
	else {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	cout << ans << endl;
	return 0;
}