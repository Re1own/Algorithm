#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		string p, h;
		cin >> p >> h;
		if (h.length() < p.length()) {
			cout << "NO" << endl;
		}
		else {
			map<char,int> Pcnt;
			set<char> Pe;
			int flag = 0;
			for (int i = 0; i < p.length(); i++) {
				Pcnt[p[i]]++;
				Pe.insert(p[i]);
			}
			//cout << endl;
			for (int i = 0; i < h.length(); i++) {
				//if (i != 3)	continue;
				map<char,int> fuzhi;
				for (int j = i; j < i+p.length() && j < h.length(); j++) {
					fuzhi[h[j]]++;
					//cout << h[j];
				}
				//cout << endl;
				int cnt = 0;
				for (auto k : Pe) {
					if (fuzhi[k] == Pcnt[k] && fuzhi[k] != 0)	cnt++;
					//cout << fuzhi[k] << " ";
				}
				if (cnt == Pe.size()) {
					flag = 1;
					//cout << "SDSDAD";
					break;
				}	
			}
			if (flag)	cout << "YES" <<endl;
			else	cout << "NO" << endl;

		}

	}
	return 0;
}