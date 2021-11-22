#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int maxn = 205;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> str;
	map<char, int> hash;
	for (int i = 0; i < n; i++) {
		char ch;
		cin >> ch;
		hash[ch]++;
		if (ch == 'W')	str.push_back(0);
		else	str.push_back(1);
	}
	if (hash['W'] == 0 || hash['B'] == 0) {
		cout << 0 << endl;
	}
	else if (hash['W']&1 && hash['B']&1) {
		cout << -1 << endl;
	}
	else if (hash['W']&1) {	//都变成W
		vector<int> opt;
		for (int i = 0; i < n; i++) {
			if (str[i]) {
				str[i] = !str[i];
				str[i+1] = !str[i+1];
				opt.push_back(i+1);
			}
		}
		cout << opt.size() << endl;
		for (int i = 0; i < opt.size(); i++) {
			if (i == 0)	cout << opt[i];
			else	cout << " " << opt[i];
		}
		cout << endl;
	}
	else {
		vector<int> opt;
		for (int i = 0; i < n; i++) {
			if (!str[i]) {
				str[i] = !str[i];
				str[i+1] = !str[i+1];
				opt.push_back(i+1);
			}
		}
		cout << opt.size() << endl;
		for (int i = 0; i < opt.size(); i++) {
			if (i == 0)	cout << opt[i];
			else	cout << " " << opt[i];
		}
		cout << endl;
	}
	return 0;
}