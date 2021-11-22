#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	while(n--) {
		string str;
		cin >> str;
		int even = 0, flag = 0, sum = 0;
		for (int i = 0; i < str.length(); i++) {
			if ((str[i]-'0')%2 == 0) {
				even++;
			}
			if (str[i] == '0') {
				flag = 1;
			}
			sum += (str[i]-'0');
		}
		if (sum % 3 == 0 && flag && even >= 2) {
			cout << "red" << endl;
		}	
		else {
			cout << "cyan" << endl;
		}
	}
	return 0;
}