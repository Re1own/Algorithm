#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int a[5] = {4, 1, 6, 9, 5};
	do {
		for (int i = 0; i < 5; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	while(next_permutation(a, a+5));
	return 0;
}