#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a = 11, times = 0;
	while(a) {
		a &= (a-1);
		cout << a << endl;
		times++;
	}
	cout << times << endl;
	return 0;
}