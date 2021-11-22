#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
 
 
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		string s, c;
		cin >> s >> c;
		if (s < c) {
			cout << s << endl;
		}
		else {
			//int flag = 0;
			for (int i = 0; i < s.length()-1; i++) {
				for (int j = i+1; j < s.length(); j++) {
						swap(s[i], s[j]);
						if (s < c) {
							cout << s << endl;
							goto success;
						}
						swap(s[i],s[j]);
				}
			}
			cout << "---" << endl;
			success:
			continue;
		}
	}
	return 0;
}